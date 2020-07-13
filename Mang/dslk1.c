#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int number; 
	struct Node*next;
}Node;

typedef struct List{
	Node*dau; Node*cuoi;
}List;

void KTRong(List &l){
	l.dau=l.cuoi=NULL;
}

void show(List &l);

void ThemDau(List &l){
	int x;
	printf("Nhap so x: ");scanf("%d",&x);
	Node*p=(Node*)malloc(sizeof(Node));
	p->number=x;
	p->next=NULL;
	if(l.dau==NULL){
		l.dau=l.cuoi=p;
	}else{
		p->next=l.dau;
		l.dau=p;
	}
}

void ThemCuoi(List &l){
	int x;
	printf("Nhap so x: ");scanf("%d",&x);
	Node*p=(Node*)malloc(sizeof(Node));
	p->number=x;
	p->next=NULL;
	if(l.dau==NULL){
		l.dau=l.cuoi=p;
	}else{
		p->next=NULL;
		l.cuoi->next=p;
		l.cuoi=p;
	}
}

void show(List &l){
	Node*i=l.dau;
	while(i!=NULL){
		printf("%d\t ",i->number);
		i=i->next;
	}
}

void ptuchan(List &l){
	Node*p=l.dau;
	while(p!=NULL){
		if(p->number%2==0){
			printf("\t%d",p->number);
		}
		p=p->next;		
	}
}

void ptunhonhat(List &l){
	Node*p=l.dau;
	int min=0;
	while(p!=NULL){
		if(p->number<=min)
			p->number=min;
		p=p->next;
	}
	printf("\n %d\n",min);
}

int main(){
	List l;
	KTRong(l);
	int n;
	printf("Nhap so phan tu danh sach: "); scanf("%d",&n);
	for(int i=0;i<n;i++)
		ThemDau(l);
	show(l);
	printf("\n Cac phan tu chan: ");
	ptuchan(l);
	printf("\n");
	ptunhonhat(l);
}
