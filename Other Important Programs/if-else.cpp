#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("enter two numbers\t");
	scanf("%d %d",&a,&b);
	if (a>b)
	{
		printf("biggest no=%d",a);
	}
	else
	{
		printf("biggest no=%d",b);
	}
	getch();
}


