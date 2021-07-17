#include<stdio.h>
#include<conio.h>

void main()
{
	char n;
	
	printf("enter any letter");
	scanf("%c",&n);
	
	switch(n){
		case('a'): printf("a for apple"); break;
		case('b'): printf("b for ball"); break;
		case('c'): printf("c for cat"); break;
		case('d'): printf("d for dog"); break;
	}
	getch();
}
