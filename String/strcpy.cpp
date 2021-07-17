#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
	char n[10],n1[10]="ram";
	
	printf("value of n = %s\n",n);
	printf("value of n1 = %s\n",n1);
	strcpy(n,n1);
	printf("value of n = %s\n",n);
	printf("value of n1 = %s\n",n1);
	
	getch();
}

