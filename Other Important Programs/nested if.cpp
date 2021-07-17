#include<stdio.h>
#include<conio.h>
main ()
{
	int a,b,c;
	printf("enter any three numbers \t");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("biggest no=%d",a);
		}
	
		else
		{
			printf("biggest no.=%d",c);	
		}
	}
	else
	{
		if(b>c)
		{
			printf("biggest no.=%d",b);
		}
		else
		{
			printf("biggest no.=%d",c);
		}
	}
	getch();
}
