#include<stdio.h>

void design()
{
	int num,i,j,k,sp=10;
	
	printf("enter no. \t");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		for(k=1;k<=sp;k++)
		{
			printf(" ");
		}
		sp--;
		
		for(j=1;j<=i;j++)
		{ 
			printf("* ");
		}
			printf("\n");
	}
}

void main()
{
	design();

	getch();
}
