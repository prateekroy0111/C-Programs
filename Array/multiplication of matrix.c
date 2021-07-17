#include<stdio.h>
 
int main()
{
   	int a[3][3],b[3][3],c[3][3],i,j,k,sum;
	 
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter 1st matrix element \t");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter 2nd matrix element \t");
			scanf("%d",&b[i][j]);
		}
	}

   for(i=0;i<3;i++)
   {
      	for(j=0;j<3;j++)
	  	{
	        sum=0;
	        for (k=0;k<3;k++)
			{
	        	sum=sum+a[i][k]*b[k][j];
	        }
	        c[i][j]=sum;
      	}
   }
 
   printf("\nMultiplication Of Two Matrices : \n");
   for(i=0;i<3;i++) 
   {
      for(j=0;j<3;j++)
	  {
        printf("%d\t",c[i][j]);
      }
      printf("\n");
   }
 
   return (0);
}
