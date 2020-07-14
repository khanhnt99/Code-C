#include<stdio.h>
#define MAX 100
#include<stdbool.h>

void NhapMang(int a[MAX],int n){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
}

void XuatMang(int a[MAX],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void find(int a[MAX],int n){
	int x;
	int test=0;
	printf("\nNhap gia tri x: ");scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(x==a[i]){
			printf("\nx o vi tri thu %d",i+1);
			test++;
		}
	}
	if(test!=0) printf("\nKhong tim thay x");
}

int main(){
	int n; int a[MAX];
	printf("\nn=");scanf("%d",&n);
	NhapMang(a,n);
	XuatMang(a,n);
	find(a,n);
	printf("\n");
}
