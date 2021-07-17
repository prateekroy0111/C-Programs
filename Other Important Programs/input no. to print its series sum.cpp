#include<stdio.h>
#include<conio.h>
main()
{
	int num,sum=0,i;
	
	printf("enter no.");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("sum = %d",sum);
	getch();
}

