#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k=1,l=3;
	
	for(i=1;i<=3;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);	
			k++;
		}
		printf("\n");
	}
		
	for(i=2;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",l);
			l--;
		}
		printf("\n");
	}
	getch();
}
