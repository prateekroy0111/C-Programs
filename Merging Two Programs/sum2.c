#include<stdio.h>
#include "sum1.c"

void main()
{
	int a,b,c;
	printf("enter 2 nos. \n");
	scanf("%d%d",&a,&b);
	
	c=sum(a,b);
	
	printf("sum = %d",c);
	getch();
}
