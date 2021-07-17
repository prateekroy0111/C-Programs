#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k,sp=7;
	
	for(i=4;i>=1;i--)
	{
		for(k=1;k<=sp;k++)
		{
			printf(" ");
		} 
		
		
		for(j=i;j>=1;j--)
		{
			printf("%d ",j);	
		}
		
		printf("\n");
		sp=sp+2;
	}
getch();
}
	
