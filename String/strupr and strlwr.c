#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
	char n[]="RamAN";
	printf("value of n = %s\n",n);
	strlwr(n);
	printf("value of n = %s\n",n);
	strupr(n);
	printf("value of n = %s\n",n);
	getch();
}

