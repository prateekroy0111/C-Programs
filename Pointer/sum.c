#include<stdio.h>

void main()
{
	int x,y,z;
	int *p1,*p2,*p3;
	
	p1=&x;
	p2=&y;
	p3=&z;
	
	printf("enter nos.");
	scanf("%d%d",&x,&y);
	
	*p3=*p1+*p2;
	printf("%d \t %u",*p3,&p3);
	
	getch();
}
