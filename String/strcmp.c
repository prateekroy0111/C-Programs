#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
	char n[10]="RAM",n1[10]="ram";
	int i;
	printf("value of n = %s\n",n);
	printf("value of n1 = %s\n",n1);
	i=strcmp(n1,n);
	if(i==0)
		printf("same string \t value of i = %d",i);
	else
		printf("different string \t value of i = %d",i);
	getch();
}

