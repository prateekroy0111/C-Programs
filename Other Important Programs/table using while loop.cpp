#include<stdio.h>
#include<conio.h>
main()
{
	int num,i;
	printf("enter a no. to get its table \t");
	scanf("%d",&num);
	
	i=1;
	while(i<=10)
	{
		printf("\n %d * %d = %d",num,i,num*i);
		i++;
		
	}
	getch();
}
