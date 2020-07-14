#include <conio.h>
#include <stdio.h>
typedef int  Mang [100];

main(){
    Mang a;
    int i, n, k, x;
    //clrscr();
    printf("N=");
    scanf("%d", &n);
    for (i=0; i<n; i++){
        printf("m[%d]=", i+1);
        scanf("%d", &a[i]);
    }
    printf("Mang vua nhap la: \n");
    for (i=0; i<n; i++)
        printf("%d ", a[i]);
    
    printf("\n Nhap so x=");
    scanf("%d", &x);
    printf("\n Nhap so k trong [1,%d]=", n);
    scanf("%d", &k);
    k--;
    for (i=n; i>k; i--)
        a[i]=a[i-1];
    a[k]=x;
    n++;
    printf("Mang vua chen la: \n");
    for (i=0; i<n; i++)
        printf("%d ", a[i]);
    getch();
}
