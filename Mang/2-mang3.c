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

void YenNgua(int m, int n, float a[10][10]){
	float max,min;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			bool min_hang=true, max_cot=true;
			for(int k=0;k<n;k++)
				if(a[i][k]<a[i][j]){      //ktra a[i][j] co phai phan tu nho nhat hang 
					min_hang=false;
					break;
				}
			for(int l=0;l<m;l++)
				if(a[l][j]>a[i][j])        //ktra a[i][j] co phai phan tu lon nhat cot
				{
					max_cot=false;
					break;
				}
			if(min_hang && max_cot){
				printf("\na[%d,%d]=%f la phan tu yen ngua",i+1,j+1,a[i][j]);
			}
		}
	}
}


int main(){
	int m,n;
	float a[10][10];
	printf("\nNhap so dong va so cot: ");
	scanf("%d\t%d",&m,&n);
	NhapMang(m,n,a);
	XuatMang(m,n,a);
	printf("\n=====================================\n");
	YenNgua(m,n,a);

}
