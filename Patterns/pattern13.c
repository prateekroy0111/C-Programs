#include<stdio.h>

void main()
{
	int i,j,k=0;
	
	for(i=6;i>0;i--)
	{
		for(j=k+1;j<6;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
		k++;
	}
	
	getch();
	
}
