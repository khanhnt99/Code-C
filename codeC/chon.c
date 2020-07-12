#include<stdio.h>

void HienThi(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

int hoanvi(int *a, int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;

}

void sapxepchon(int n,int a[]){
	for(int j=0;j<n-1;j++){
		int min=j;
		for(int i=j+1;i<n;i++){	
		if(a[min]>a[i])
			{
			min=i;
			hoanvi(&a[j],&a[min]);
			}	
		}
	}


}

int main(){
	int n,a[100];
	FILE*f=fopen("input.txt","r");
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++){
		fscanf(f,"%d",&a[i]);
	}
	fclose(f);
	sapxepchon(n,a);
	HienThi(n,a);
	printf("\n");
}

