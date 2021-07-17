#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,n,sp=20;
	
	printf("enter no.");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=sp;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
			
		printf("\n");
		
		sp--;
	}
getch();
}
