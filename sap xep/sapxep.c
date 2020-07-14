
#include<stdio.h>
#define MAX 100

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

void HoanVi(int &a, int &b){
	int c=a;
	a=b;
	b=c;
}

void SelectionSort(int a[MAX],int n){ //sap xep chon
	for(int j=0;j<n-1;j++){
		int min=j;
		for(int i=j+1;i<n;i++){
			if(a[min]>a[i]){
				min=i;
				HoanVi(a[j],a[min]);
			}
		}
	}
	XuatMang(a,n);
}

void InsertionSort(int a[MAX],int n){ //sap xep chen
	int i,j,x;
	for(j=1;j<n;j++){
		x=a[j];
		i=j-1;
		while(x<a[i]&&i>=0){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=x;
	}
	XuatMang(a,n);
}

void bubblesort(int a[MAX],int n){  //sap xep noi bot
	for(int j=0;j<n-1;j++){
		for(int i=n-1;i>j;i--){
			if(a[i-1]>a[i]) HoanVi(a[i-1],a[i]);
		}
	}
	XuatMang(a,n);
}



int main(){
	int n; int a[MAX];
	printf("\nn=");scanf("%d",&n);
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\n=========================\n");
	//SelectionSort(a,n);
	//InsertionSort(a,n);
	bubblesort(a,n);
	printf("\n");
	
}
