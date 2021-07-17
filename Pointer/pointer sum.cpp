#include<stdio.h>
#include<conio.h>
main()
{
	int a=10,b=20,sum;
	int *x,*y;
	x=&a;
	y=&b;
	sum=*x+ *y;
	printf("sum = %d",sum);
	getch();
}
