#include<stdio.h>
#include<stdlib.h>
typedef struct CanBo{
	int maso;char hoten[8];
}CanBo;

typedef struct Node{
	CanBo info;
	struct Node *next;
}Node;

typedef struct List{
	Node *PFirst,*PLast;
}List;

void KhoiTao(List &l){
	l.PFirst=l.PLast=NULL;
}

/*int  KTRong(List &l){
	return(l.PFirst==NULL);
}*/

void ThemDau(List &l){
	CanBo x;
	printf("\nMa so= ");scanf("%d",&x.maso);
	printf("\nHo Ten= ");
	getchar();
	fgets(x.hoten,sizeof x.hoten,stdin);
	Node*p=(Node*)malloc(sizeof(Node));
	p->info=x;
	p->next=NULL;	
	if(!l.PFirst){
		l.PFirst=l.PLast=p;
	}else{
		p->next=l.PFirst;
		l.PFirst=p;
	}
}

void ThemCuoi(List &l){
	CanBo x;
	printf("\nMa so= ");scanf("%d",&x.maso);
	printf("\nHo Ten= ");
	getchar();
	fgets(x.hoten,sizeof x.hoten,stdin);
	Node*p=(Node*)malloc(sizeof(Node));
	p->info=x;
	p->next=NULL;
	if(!l.PFirst){
		l.PFirst=l.PLast=p;	
	}else{
		p->next=NULL; //lien ket node can them
		l.PLast->next=p; 
		l.PLast=p;//chinh con tro danh sach
		}
}

void HienThi(List &l){
	Node *i=l.PFirst;
	while(i!=NULL){
		printf("%d\t%s\n",i->info.maso, i->info.hoten);
		i=i->next;
	}	
	
}

void XoaDau(List &l){
	
	

	Node*p=l.PFirst;
	l.PFirst=p->next;
	HienThi(l);
}

void XoaCuoi(List &l){
	if(!l.PFirst){
		return;
	}else{
		Node*p=l.PFirst;
		Node*q=(Node*)malloc(sizeof(Node));
		while(p->next!=NULL){
			q=p;
			p=p->next;
		}
		q->next=NULL;
		l.PLast=q;
		free(p);
	}
	HienThi(l);
}

void xoavitrik(List &l,int n){
	int i=1;
	int k;
	printf("\nNhap vi tri can xoa: ");scanf("%d",&k);
	if(k<=0) XoaDau(l);
	else if(k>n) XoaCuoi(l);
	else{
		Node*q=(Node*)malloc(sizeof(Node));
		Node*p=l.PFirst;
		while(i!=k){
			q=p;
			p=p->next;
			i++;
		}
		if(p->next==NULL) XoaCuoi(l);
		q->next=p->next;
		delete p;
	}
	HienThi(l);
}

void themvitrik(List &l, int n){
	int k;
	printf("\nNhap vi tri can them: ");scanf("%d",&k);
	if(k<1) ThemDau(l);
	else if(k>=n) ThemCuoi(l);
	else{
		int i=1;
		CanBo x;
		printf("\nMa so=");scanf("%d",&x.maso);
		printf("\nHo ten="); getchar();
		fgets(x.hoten, sizeof x.hoten,stdin);
		Node*q=(Node*)malloc(sizeof(Node));
		q->info=x;
		q->next=NULL;
		Node*p=l.PFirst;
		while(i!=k-1){
			p=p->next;
			i++;
		}
		if(p->next==NULL) ThemCuoi(l);
		q->next=p->next;
		p->next=q;
		
	}
	HienThi(l);	
}

int main(){
	List l;
	KhoiTao(l);
	int n,i;
	printf("\nn=");scanf("%d",&n);
	for( i=0;i<n;i++){
		ThemDau(l);
	}
	printf("\nTT danh sach:\n");
	HienThi(l);
	/*ThemCuoi(l);
	printf("\n=============================\n");
	HienThi(l);
	printf("\n=============================\n");
	XoaDau(l);
	printf("\n=============================\n");
	XoaCuoi(l);
	printf("\n=============================\n");*/
	xoavitrik(l,n);
	themvitrik(l,n);
	
}




