#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,sum;
	char c;
	do
	{
		printf("enter 1st no. \t");
		scanf("%d",&a);
		printf("enter 2nd no. \t");
		scanf("%d",&b);
		
		sum=a+b;
		printf("sum = %d \n",sum);
		
		printf("you want again press y or Y   ");
		scanf("%s",&c);
	}while(c=='y'||c=='Y');
	
	getch();
}

