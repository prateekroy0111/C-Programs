#include<stdio.h>

void main()
{
	int b[10],i,d;
	
	printf("enter decimal \t");
	scanf("%d",&d);
	
	for(i=0;d>0;i++)
	{
		b[i]=d%2;
		d=d/2;
	}
	
	printf("binary is = \t");
	
	for(i=i-1;i>=0;i--)
	{
		printf("%d",b[i]);
	}
	
	getch();
	
}
