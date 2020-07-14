#include<stdio.h>

typedef struct Book{
	char name[10];
	int page;
	int cost;	
}Book; 

typedef struct List{
	Book ds[100];
	int n;
}List;

void Nhap(List &l){
	printf("Nhap so luong sach: "); scanf("%d",&l.n);
	for(int i=0;i<l.n;i++){
		printf("\nName=");getchar();
		fgets(l.ds[i].name,sizeof l.ds[i].name,stdin);
		
		printf("\npage=");scanf("%d",&l.ds[i].page);
		
		printf("\ncost=");scanf("%d",&l.ds[i].cost);
		
		printf("\n=================================\n");
	}
}

void Xuat(List l){
	printf("\nDanh sach do la: \n");
	printf("Name\tPage\tCost\n");
	for(int i=0;i<l.n;i++){
		printf("%s\t%d\t%d\n",l.ds[i].name,l.ds[i].page,l.ds[i].cost);
	}
}

int main(){
	List l;
	Nhap(l);
	Xuat(l);
	FILE*f;
	f=fopen("data.txt","w+");
	for(int i=0;i<l.n;i++){
		fprintf(f,"%s\t%d\t%d\n",l.ds[i].name,l.ds[i].page,l.ds[i].cost);
	}
	fclose(f);
}

