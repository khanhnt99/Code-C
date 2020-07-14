#include<stdio.h>
void main()
{
	int n;
	int i=0,d,value,sum=0;
	float TB;
	printf("Nhap n: ");
	scanf("%d",&n);
	while (i<n)
	{
		printf("Nhap vao so bat ky: ");
		scanf("%d",&value);
		if((value%2)!=0)
		{
            sum+=value;
            d++;
        }
		++i;
	}
	TB=(sum/d);
	printf("TB=%0.2f",TB);
	getch();
}
