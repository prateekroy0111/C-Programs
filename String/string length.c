#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{	
	char s[15];
	int i,l=0;
	printf("enter string ");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		l++;	
	}
	printf("length of string is  %d",l);
	
	getch();
}

