#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char n[10];
	printf("enter your name  ");
	//scanf("%s",&n);
	gets(n);
	
	//printf("name is %s",n);
	printf("name is - ");
	puts(n);
	
	getch();
}
