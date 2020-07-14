#include <stdio.h>
#include <conio.h>

main()	
{	int i,n,max,min;
	int a[20];
				printf("\nNhap vao so luong phan tu trong mang (toi da la 20 phan tu n=");
				scanf("%d",&n);
				for(i=1;i<=n;i++)
				{
				printf("\nNhap vao phan tu thu %d: ",i);
				scanf("%d",&a[i]);
				}
	
		{
			max=a[1];
				for(i=1;i<=n;i++)
				{
					if(max<a[i])max=a[i];
				
				}
					printf("\nSo lon nhat trong mang la %d",max);
			min=a[1];
				for(i=1;i<=n;i++)
				{
					if(min>a[i])min=a[i];
				}
					printf("\nSo nho nhat trong mang la %d",min);
		}		
	getch();
}
