#include<stdio.h>
#include<conio.h>
main()
{
	int i,j;
	
	i=5;
	while(i>0)
	{	
			j=1;
			while(j<=i)	
			{
				printf("%d",j);
				j++;
			}
			
		printf("\n");	
		i--;
	}
	getch();
}
