#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
	char n[10]="password",n1[10];
	int i;
	char c='y';
	
	while(c=='y')
	{
		printf("enter password \t");
		scanf("%s",&n1);
	
		i=strcmp(n,n1);
		{
			if(i==0)
			printf("\n welcome");
			
			else
			printf("\n wrong password");
		}
		
		printf("\n want to repeat the program \t");
		scanf("%s",&c);
	}
	
	
	getch();
}
