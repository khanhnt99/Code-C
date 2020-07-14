#include<stdio.h>
#include<stdbool.h>
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

void HoanVi(float &a, float &b){
	int c=a;
	a=b;
	b=c;
}

void sapxepmang(int m,int n,float a[10][10]){
	float b[100]; //luu gia tir tong cac dong
	int k=0;
	int i,j;
	for(int i=0;i<m;i++){				//luu vao b
		int tong = 0;
		for(int j=0;j<n;j++){
			tong=tong+a[i][j];
			}
		b[k++]=tong;
	}
	for(j=0;j<k-1;j++){ 		// hoan vi trong b
		for(i=k-1;i>=j;i--){
			if(b[i]<b[i-1]) HoanVi(b[i],b[i-1]);
		}
		for(int k=0;k<n;k++){
			int temp;
			temp=a[i][k];
			a[j][k]=a[i][k];
			a[j][k]=temp;
			
		}
	}
	XuatMang(m,n,a);
	
}



int main(){
	int m,n;
	float a[10][10];
	printf("\nNhap so dong va so cot: ");
	scanf("%d\t%d",&m,&n);
	NhapMang(m,n,a);
	XuatMang(m,n,a);
	printf("\n=====================================\n");
	sapxepmang(m,n,a);
	

}
