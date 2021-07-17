#include<stdio.h>
#include<conio.h>
main()
{
	int a=10;
	int *b;
	b=&a; //address of a assigned to pointer b
	
	printf("address of a %x \n",&a);
	//%x for hexadecimal addresss %d for decimal address
	printf("address stored in pointer b %x \n",b);
	printf("value of a %d \n",a);
	printf("value of variable stored in pointer %d \n",*b);
	printf("address of pointer b  %x \n",&b);
	getch();
}
