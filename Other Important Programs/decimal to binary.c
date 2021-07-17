#include<stdio.h>

void main()
{
	int i,dec,bin=0,rem;

	printf("enter decimal no.\t");
	scanf("%d",&dec);
	i=1;
	while(dec>0)
	{
		rem=dec%2;
		bin=bin+rem*i;
		i=i*10;
		dec=dec/2;
	}
	printf("\nbinary is : %d ",bin);

	getch();
}
