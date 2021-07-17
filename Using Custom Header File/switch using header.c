#include<stdio.h>
#include<a.h>
#include<b.h>

void main()
{
	char c;
	printf("enter a / b  \t");
	scanf("%c",&c);
	switch(c)
	{
		case 'a': a();
		break;
		
		case 'A': a();
		break;
		
		case 'B': a();
		break;
		
		case 'b': b();
		break;
		
		default: printf("wrong input");
		break;
	}
	getch();
}
