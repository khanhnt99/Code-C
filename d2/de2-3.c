#include<stdio.h>
#include<stdlib.h>

typedef struct SinhVien{
	int masv;
	char hoten[10];
}SinhVien;

typedef struct Node{
	SinhVien info;
	struct Node* next;
}Node;

typedef struct List{
	Node*dau,*cuoi;
}List;

void KhoiTao(List &l){
	l.dau=l.cuoi=NULL;
}

void HienList(List &l);

void ThemDau(List &l){
	SinhVien x;
	printf("\nMa sv=");scanf("%d",&x.masv);
	printf("\nHo ten="); getchar();
	fgets(x.hoten,sizeof x.hoten, stdin);
	Node*p=(Node*)malloc(sizeof(Node));
	p->info=x;
	p->next=NULL;
	if(!l.dau){
		l.dau=l.cuoi=p;
	}else{
		p->next=l.dau;
		l.dau=p;		
	}
}

void ThemCuoi(List &l){
	SinhVien x;
	printf("\nMa sv=");scanf("%d",&x.masv);
	printf("\nHo ten="); getchar();
	fgets(x.hoten,sizeof x.hoten,stdin);
	Node*p=(Node*)malloc(sizeof(Node));
	p->info=x;
	p->next=NULL;
	if(!l.dau){
		l.dau=l.cuoi=p;
	}else{
		p->next=NULL;
		l.cuoi->next=p;
		l.cuoi=p;
	}
}

void XoaDau(List &l){
	Node*p=l.dau;
	l.dau=p->next;
	free(p);
	HienList(l);
}

void XoaCuoi(List &l){
	Node*p=l.dau;
	Node*q=(Node*)malloc(sizeof(Node));
	while(p->next!=NULL){
		q=p;
		p=p->next;
	}
	q->next=NULL;
	l.cuoi=q;
	free(p);
	HienList(l);	
}

void themvitrik(List &l){
	int k;
	printf("\nNhap vi tri k: ");scanf("%d",&k);
	Node*p=l.dau;
	SinhVien x;
	printf("\nMa sv=");scanf("%d",&x.masv);
	printf("\nHo ten="); getchar();
	fgets(x.hoten,sizeof x.hoten,stdin);
	Node*q=(Node*)malloc(sizeof(Node));
	q->info=x;
	q->next=NULL;
	if(k<=0) ThemDau(l);
	for(int i=1;i<k-1;i++){
		p=p->next;
		if(p->next=NULL)
			ThemCuoi(l);
		q->next=p->next;
		p->next=q;
	}
	HienList(l);
}

void HienList(List &l){
	Node *i=l.dau;
	while(i!=NULL){
		printf("%d\t%s\n",i->info.masv,i->info.hoten);
		i=i->next;
	}
}


int main(){
	List l;
	KhoiTao(l);
	int n;
	printf("Nhap tong so sinh vien: ");scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		//ThemDau(l);
		ThemCuoi(l);
	}
	HienList(l);
	//printf("\n=======================\n");
	//XoaDau(l);
	printf("\n=======================\n");
	//XoaCuoi(l);
	themvitrik(l);
	
}
