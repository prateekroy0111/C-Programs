#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
	char n[10]="RAM";
	printf("initial value of n = %s\n",n);
	strrev(n);
	printf("final value of n = %s\n",n);
	getch();
}

