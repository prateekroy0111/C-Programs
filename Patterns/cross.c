#include<stdio.h>

void main()
{
	int i,j,k;
	
	for(i=1;i<6;i++)
	{
		if(i==3)
		{
			for(k=1;k<6;k++)
			{
				printf("*");
			}
			printf("\n");
		}
			
			for(j=1;j<3;j++)
			{
				printf(" ");
			}

		printf("*");
		printf("\n");
	}
	
	getch();
	
}
