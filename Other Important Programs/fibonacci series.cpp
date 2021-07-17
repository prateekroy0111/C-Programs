#include<stdio.h>
#include<conio.h>
main()
{
	int num,num1,num2,sum,i;
	printf("enter num for fibonacci series \t");
	scanf("%d",&num);
	
	num1=0;
	num2=1;
	printf("%d\t%d\t",num1,num2);
	for(i=3;i<=num;i++)
	{
		sum=num1+num2;
		printf("%d \t",sum);
		num1=num2;
		num2=sum;
	}
	getch();
}
