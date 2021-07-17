#include<stdio.h>
#include<conio.h>
main()
{	
	int i,num,ans=1;
	
	printf("enter no. to find factorial : ");
	scanf("%d",&num);
	
	for(i=num;i>=1;i--)
	{
		printf(" %d *",i);
		ans=ans*i;
	}
	printf("\nFactorial = %d",ans);
	
	getch();
}

