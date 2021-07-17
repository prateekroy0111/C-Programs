#include<stdio.h>

void main()
{
	int a=123;
	int u=a%10;
	int t=(a/10)%10;
	int h=a/100;
	int r=(u*100)+(t*10)+h;
	printf("reverse = %d",r);
	
	getch();
}
