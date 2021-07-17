#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
	char n[]="happy ",n1[]="birthday";
	printf("value of n = %s\n",n);
	printf("value of n1 = %s\n",n1);
	strcat(n,n1);
	printf("value of n = %s\n",n);
	printf("value of n1 = %s\n",n1);
	
	getch();
}

