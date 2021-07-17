#include<stdio.h>
#include<conio.h>
 main()
{
	int a[3][4], b[3][4], c[3][4],i,j;
	 
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("enter 1st matrix element \t");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("enter 2nd matrix element \t");
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
}
