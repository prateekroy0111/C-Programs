#include<stdio.h>
#include<conio.h>
main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	getch();
}
