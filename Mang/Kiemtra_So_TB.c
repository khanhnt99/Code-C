#include<stdio.h>
int main(){
    int n;
    int i=0;
    float TB, value, sum=0;
    printf("Nhap n=");
    scanf("%d",&n);
    while(i<n){
         printf("Nhap vao so bat ky:");
         scanf("%f",&value);
         sum+=value;
         ++i;
    }
    TB=sum/(float)i;
    printf("TB=%6.2f",TB);
    getch();
}
