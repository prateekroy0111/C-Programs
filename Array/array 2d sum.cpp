#include<stdio.h>
#include<conio.h>
main()
{
	int mat[3][4],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("enter array elements \t");
			scanf("%d",&mat[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{	
		for(j=0;j<4;j++)
		{
			sum=sum+mat[i][j];
		}	
	}
	printf("%d",sum);
	getch();
}
