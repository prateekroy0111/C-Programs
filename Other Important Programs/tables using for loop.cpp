#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("enter a no. to get its table \t");
	scanf("%d",&num);
	
	for(int i=1; i<=10; i++)
	{
		printf("\n %d * %d = %d",num,i,num*i);	
	}	
	getch();
}
