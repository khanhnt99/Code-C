#include<stdio.h>
#define MAX 50

void NhapMang(int a[MAX],int n){
	for(int i=0;i<n;i++){
		printf("Phan tu thu a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void XuatMang(int a[MAX],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void HoanVi(int a,int b){
	int c=a;
	a=b;
	b=c;
}

int SelectionSort(int a[MAX],int n){
	for(int j=0;j<n-1;j++){
		int min=j;		
		for(int i=j+1;i<n;i++){
			if(a[i]<a[min]){
				min=i;
				HoanVi(a[j],a[min]);
			}
		}
	}
	printf("\n----------------------------\n");
	XuatMang(a,n);
}

int timkiemnhiphan(int a[MAX],int l,int r,int x){
	int mid=(l+r)/2;
	if(a[mid]==x)
		return mid;
	if(a[mid]>x)
		return timkiemnhiphan(a,l,mid-1,x);
	if(a[mid]<x)
		return timkiemnhiphan(a,mid+1,r,x);
	return -1;
}



int main(){
	int n; int a[MAX];
	do{
		printf("Nhap so phan tu cua mang: ");
		scanf("%d",&n);
		if(n<0 || n>MAX){
			printf("Xin nhap lai!");
		}
	}while(n<0 || n>MAX);
	NhapMang(a,n);
	XuatMang(a,n);
	SelectionSort(a,n);
	//InsertionSort(a,n);
	int x;
	printf("\nNhap so x can tim: ");
	scanf("%d",&x);
	int result=timkiemnhiphan(a,0,n-1,x);
	if(result!=-1)
		printf("%d xuat hien tai vi tri %d",x,result);
	else printf("\nKhong tim duoc");
	printf("\n");
}
