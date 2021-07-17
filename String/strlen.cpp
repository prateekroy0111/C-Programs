#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
	char n[15];
	int i;
	printf("enter string ");
	gets(n);
	//scanf("%s",&n);
	i=strlen(n);
	printf("length of string is  %d",i);
	
	getch();
}

