#include<stdio.h>

int main(){
	int a[5]={0,1,2,3,4};
	int b[5]={6,7,8,9,0};
	int i,temp=0;
	int m=5;
	int n=5;
	int c[m+n];
	for(i=0;i<m;i++){
		c[temp]=a[i];
		temp++;
	}
	for(i=0;i<n;i++){
		c[temp]=b[i];
		temp++;
	}
	printf("\nMang sau khi tron: ");
	for(i=0;i<m+n;i++){
		printf(" %d\t",c[i]);
	}
}
