#include<stdio.h>

void HienThi(int n,int a[]){
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
}

void sapxepchen(int n, int a[]){
	int i,j,x;
	for(i=1;i<n;i++){
		x=a[i];
		j=i-1;
		while(x<a[j]&&j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);	
	}

}






int main(){
	int n;int a[100];
	FILE*f=fopen("input.txt","r");
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++){
		fscanf(f,"%d\t",&a[i]);
	}
	sapxepchen(n,a);
	HienThi(n,a);
	printf("\n");
}


