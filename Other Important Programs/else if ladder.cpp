#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter your number\t");
	scanf("%d",&a);
	if(a==1)
	{
		printf("monday");
	}	
	else if(a==2)
	printf("tuesday");
	else if(a==3)
	printf("wednesday");
	else if(a==4)
	printf("thursday");
	else if(a==5)
	printf("friday");
	else if(a==6)
	printf("saturday");
	else if(a==7)
	printf("sunday");
	else
	printf("\a invalid input \a");
	getch();
	
}
