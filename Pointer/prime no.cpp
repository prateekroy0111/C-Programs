#include<stdio.h>

void main()
{
	int num,i,j=0;
	int *x,*y,*z;
	
	x=&num;
	y=&i;
	z=&j;
	
	printf("enter no. \t");
	scanf("%d",x);
	
	for((*y)=2;(*y)<=((*x)/2);(*y)++)
	{
		if((*x)%(*y)==0)
		{
			*z=1;
		}
	}
	
	if((*z)==0)
	{
		printf("its a prime no.");
	}
	else
	{
		printf("its not a prime");
	}
	getch();
}
