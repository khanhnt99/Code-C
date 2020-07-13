#include<stdio.h>

void NhapMang(int &m, int &n, float a[10][10]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("\nPhan tu thu a[%d][%d]=",i,j);
			scanf(" %f",&a[i][j]);
		}
	}
}

void XuatMang(int m, int n, float a[10][10]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%f\t",a[i][j]);

		}
		printf("\n");
	}
}

void HoanVi(float &a,float &b){
	int c;
	c=a;
	a=b;
	b=c;
}

void sapxep(int k, float b[100]){
	for(int j=0;j<k-1;j++){
		for(int i=k-1;i>j;i--){
			if(b[i]<b[i-1]) HoanVi(b[i],b[i-1]);	
		}
	}
}

void sapxepmang2chieu_1(int m, int n, float a[10][10]){
	float b[100];
	int k=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[k]=a[i][j];
			k++;
		}
	}
	sapxep(k,b);
	k=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=b[k];
			k++;
		}
	}
	printf("\n===============\n");
	XuatMang(m,n,a);
	
}

void sapxepmang2chieu_2(int m,int n, float a[10][10]){
	int k=m*n;
	for(int i=0;i<k-1;i++){
		for(int j=i+1;j<k;j++){
			if(a[i/n][i%n]>a[j/n][j%n]) HoanVi(a[i/n][i%n],a[j/n][j%n]);
		}
	}
	printf("\n===============\n");
	XuatMang(m,n,a);
}

int main(){
	int m,n;
	float a[10][10];
	printf("\nNhap so dong va so cot: ");
	scanf("%d\t%d",&m,&n);
	NhapMang(m,n,a);
	XuatMang(m,n,a);
//	min(m,n,a);
//	max(m,n,a);
	//sapxepmang2chieu_1(m,n,a);
	printf("\n=====================================\n");
	//XuatMang(m,n,a);
	sapxepmang2chieu_2(m,n,a);
}
