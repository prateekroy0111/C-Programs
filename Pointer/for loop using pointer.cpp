#include<stdio.h>
#include<conio.h>
main()
{
	int i,*a;
	
	a=&i;
	for(*a=1;*a<=10;(*a)++)
	{
		printf("%d \t",*a);
	}
	
	getch();
}
