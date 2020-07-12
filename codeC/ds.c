#include<stdio.h>
#include<stdlib.h> 
//#include<pthread.h>
#define MAX 100

typedef struct SinhVien{
	int masv;char hoten[20];
}SinhVien;

typedef struct Node{
	SinhVien info;
	struct Node *next; 
}Node;

typedef struct List{
	Node*dau,*cuoi;
}List;


void KTList(List &l){
	l.dau=l.cuoi=NULL;
};

void HienList(List &l);

void ThemDauList(List &l){
	SinhVien x;
	printf("\nMa sv= ");scanf("%d",&x.masv);
	printf("\nHo ten= ");
	getchar();
	fgets(x.hoten, sizeof x.hoten , stdin);
	//printf("\n");//Nhap thong tin them
	Node*p=(Node*)malloc(sizeof(Node));
	p->info=x;
	p->next=NULL;
	if(!l.dau){     //xet danh sach rong 
		l.dau=l.cuoi=p;
	}else{
		p->next=l.dau; //sua lk node can them
		l.dau=p; //chinh lai con tro danh sach
	}
};

void ThemCuoiList(List &l){
	SinhVien x;
	printf("\nMa sv= "); scanf("%d",&x.masv);
	printf("\nHo ten= ");
	getchar();
	fgets(x.hoten, sizeof x.hoten ,stdin);
	Node*p=(Node*)malloc(sizeof(Node));
	p->info=x;
	p->next=NULL;
	if(!l.dau){
		l.dau=l.cuoi=NULL;
	}else{
		p->next=NULL;
		l.cuoi->next=p;
		l.cuoi=p;		
	}
};

void XoaDauList(List &l){
	if(!l.dau){
		return;
	}else{
		Node*p=l.dau;
		l.dau=p->next;
		free(p);
	}
	HienList(l);
}

void XoaCuoiList(List &l){
	if(!l.dau){
		return;
	}else{
		Node*p=l.dau;
		Node*q=(Node*)malloc(sizeof(Node));
		while(p->next!=NULL){
			q=p;
			p=p->next;
		}
	q->next=NULL;;
	l.cuoi=q;
	free(p);		
			
	}
}


void HienList(List &l){
	Node *i=l.dau;
	while(i!=NULL)
		{	
			printf("%d\t%s\n",i->info.masv,i->info.hoten);
			i=i->next;
		}		
	
}

int main(){
	List l;int n;
	KTList(l);
	int i;
	printf("\nn= ");scanf("%d",&n);
	for(i=0;i<n;i++){
		ThemDauList(l);
		//ThemCuoiList(l);
	}	
	printf("\nTT List:\n");
	HienList(l);	
	printf("Xoa dau list\n=======================\n");
	XoaDauList(l);
}





