#include <stdio.h>
#include <conio.h>

main()	
{	int i,n,max=0,min=0,j,tg;
	int a[20];
				printf("\nNhap vao so luong phan tu trong mang (toi da la 20 phan tu n=");
				scanf("%d",&n);
				for(i=1;i<=n;i++)
				{
				printf("\nNhap vao phan tu thu %d: ",i);
				scanf("%d",&a[i]);
				}
	
	for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++){
            if(a[i]>a[j])
            {
               tg=a[i];
               a[i]=a[j];
               a[j]=tg;
            }
        }
        printf("\n Mang sau khi sap xep la:\n");
        for(i=0;i<n;i++){
           printf("%d",a[i]);
        }
	getch();
}
