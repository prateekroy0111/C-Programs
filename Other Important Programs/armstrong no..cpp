#include<stdio.h>
#include<conio.h>
main()
{
	int arms,temp,rem,num;
	
	printf("enter a number ");
	scanf("%d",&num);
	
		arms=0;
		temp=num;
		while(temp>0)
		{
			rem=temp%10;
			arms=arms+(rem*rem*rem);
			temp=temp/10;
		}
		if(arms==num)
		{
			printf("%d is armstrong ",num);
		}
		else
		{
			printf("%d is not armstrong ",num);
		}
	
	getch();
}
