#include<stdio.h>
#include<stdlib.h>
int main()
{
   	int a[10][10],b[10][10],c[10][10],i,j,k,sum,r1,c1,r2,c2;
	
	start:
	system ("cls");
	printf("enter number of rows for Matrix1 \t");
	scanf("%d",&r1);
	printf("enter number of columns for Matrix1 \t");
	scanf("%d",&c1);
	 
	printf("\n\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("enter 1st matrix element \t");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\nMatrix 1\n\n");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nenter number of rows for Matrix2 \t");
	scanf("%d",&r2);
	printf("enter number of columns for Matrix2 \t");
	scanf("%d",&c2);
	
	if(c1!=r2)
		goto start;
	
	printf("\n\n");	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("enter 2nd matrix element \t");
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n\nMatrix 2\n\n");
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d \t",b[i][j]);
		}
		printf("\n");
	}

   for(i=0;i<r1;i++)
   {
      	for(j=0;j<c2;j++)
	  	{
	        sum=0;
	        for (k=0;k<c1;k++)
			{
	        	sum=sum+a[i][k]*b[k][j];
	        }
	        c[i][j]=sum;
      	}
   }
 
   printf("\n\nMultiplication Of Two Matrices : \n");
   for(i=0;i<r1;i++) 
   {
      for(j=0;j<c2;j++)
	  {
        printf("%d\t",c[i][j]);
      }
      printf("\n");
   }
 
   return (0);
}
