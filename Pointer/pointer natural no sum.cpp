#include<conio.h>
#include<stdio.h>
main()
{
	int num,i,sum=0;
	int *x=&num;
	int *a=&i;

	
	printf("enter a natural no. till which u want sum\t");
	scanf("%d",x);
	
	for(*a=1;*a<=(*x);(*a)++)
	{
		sum=sum + *a;
	}
	printf("%d",sum);
	
	getch();
	
}
