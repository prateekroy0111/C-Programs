#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		printf("%d*%d + ",i,i);
	}
	
	for(i=1;i<=5;i++)
	{
		j=j+(i*i);
	}
	printf("\n= %d",j);
	getch();
}

