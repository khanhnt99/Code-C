#include<stdio.h>
#include<stdbool.h>

int HienThi(int n,int a[]){
	printf("\nMang do la:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void hoanvi(int *a,int *b){
	int c; 
	c=*a;
	*a=*b;
	*b=c;
}


void sapxepnoibot(int n,int a[]){
	for(int j=0;j<n-1;j++){
		for(int i=n-1;i>j;i--)
		{
			if(a[i]<a[i-1]) 
			hoanvi(&a[i-1],&a[i]);
		}
	}
}


int main(){
	int n,a[10];
	FILE*f=fopen("input.txt","r");
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++){
		fscanf(f,"%d",&a[i]);	
	}
	fclose(f);
	HienThi(n,a);
	printf("\n==============================\n");
	sapxepnoibot(n,a);
	HienThi(n,a);
	printf("\n");
}




