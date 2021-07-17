#include<stdio.h>
#include<conio.h>
void main()
{
	int x=10,y=20;
	printf("Call by value method\n");
	printf("Before calling function x=%d  y=%d",x,y);
	swap(x,y);
	printf("\nAfter calling function x=%d  y=%d",x,y);
	
	printf("\n\nCall by reference method\n");
	printf("Before calling function x=%d  y=%d",x,y);
	swap1(&x,&y);
	printf("\nAfter calling function x=%d  y=%d",x,y);
	getch();
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("\nWithin function x=%d  y=%d",x,y);
}
void swap1(int *px,int *py)
{
	int temp;
	temp=*px;
	*px=*py;
	*py=temp;
	printf("\nWithin function *px=%d  *py=%d",*px,*py);
}
