
#include<stdio.h>
#include<conio.h>
main()
{
	int mat[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter array elements \t");
			scanf("%d",&mat[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
			if((i+j)==2)
			sum=sum+mat[i][j];
		}	
	}
	printf("%d",sum);
	getch();
}
