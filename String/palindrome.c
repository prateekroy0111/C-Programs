#include<stdio.h>
#include<string.h>

void main()
{
	char n[10],n1[10];
	int p;
	
	printf("enter string \t");
	gets(n);
	strcpy(n1,n);
	strrev(n1);
	p=strcmp(n,n1);
	if(p==0)
		printf("palindrome");
	else
		printf("not palindrome");
	
	getch();
	
}
