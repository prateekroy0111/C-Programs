#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,sp=5;
	for(i=1;i<=5;i++)
	{
		for(k=sp;k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		sp--;
		printf("\n");
	}
	getch();
	
}
