#include<stdio.h>

void main()
{
	int i,j,num;
	int k;
	printf("enter first no.");
	scanf("%d",&i);
	printf("enter second no.");
	scanf("%d",&j);
	printf("enter symbol +,-,*,/,modulus ");
	scanf("%s",&k);
	
	switch(k)
	{
		case('+'): num=i+j;
		printf("%d",num);
		break;
				
		case('-'): num=i-j;
		printf("%d",num);
		break;
		
		case('*'): num=i*j;
		printf("%d",num);
		break;
		
		case('/'): num=i/j;
		printf("%d",num);
		break;
		
		case('%'): num=i%j;
		printf("%d",num);
		break;
	}
				
	
	
	getch();
	
}
