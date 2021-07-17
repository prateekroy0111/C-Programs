#include<stdio.h>
int main()
{
	int a[10][10], b[10][10],r,c,i,j;
	
	printf("enter number of rows \t");
	scanf("%d",&r);
	printf("enter number of columns \t");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter 1st matrix element \t");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\nMatrix 1\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter 2nd matrix element \t");
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n\nMatrix 2 \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nSum of 2 matrix \n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
