#include<stdio.h>
#include<conio.h>
main()
{
	int mat[3][4],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("element %d,%d =",i,j);
			scanf("%d",&mat[i][j]);
		}	
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d \t",mat[i][j]);
		}	
		printf("\n");
	}
	getch();
}

