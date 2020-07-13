#include<stdio.h>

void NhapMang(int &m, int &n, int a[10][10]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("\nPhan tu thu a[%d][%d]=",i,j);
			scanf(" %d",&a[i][j]);
		}
	}
}

void XuatMang(int m, int n, int a[10][10]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d\t",a[i][j]);

		}
		printf("\n");
	}
}

void min(int m, int n, int a[10][10]){
	int min=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]<min) min=a[i][j];
		}
	}
	printf("\nPhan tu nho nhat la: %d", min);
}

void max(int m, int n, int a[10][10]){
	int max=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>max) max=a[i][j];
		}
	}
	printf("\nPhan tu lon nhat la: %d", max);
}

int main(){
	int m,n;
	int a[10][10];
	printf("\nNhap so dong va so cot: ");
	scanf("%d\t%d",&m,&n);
	NhapMang(m,n,a);
	XuatMang(m,n,a);
	min(m,n,a);
	max(m,n,a);
}
