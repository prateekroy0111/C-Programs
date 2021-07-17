#include<stdio.h>
#include<string.h>

union student 
{
	float marks;
	char n;
}s;
void main()
{
	s.n='a';
	s.marks=344;
	
	printf("marks=%f \t roll=%c",s.marks,s.n);
	
	getch();
}
