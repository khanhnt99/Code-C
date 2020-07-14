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

void HoanVi(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}

void SelectionSort(int a[MAX],int n){ //sap xep chon
	for(int j=0;j<n-1;j++){
		int min=j;
		for(int i=j+1;i<n;i++){
			if(a[i]<a[min]){
				min=i;
				HoanVi(a[j],a[min]);
			}
		}
	}
	printf("\n==========================\n");
	XuatMang(a,n);
}

void InsertionSort(int a[MAX], int n){ //sap xep chen
	for(int j=1;j<n;j++){ //co 1 phan tu a[0])
		int x=a[j]; //chen a[i]
		int i=j-1;
		while(x<a[i]&&i>=0){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=x;
	}
	printf("\n================================\n");
	XuatMang(a,n);
	
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
	printf("\n");
}
