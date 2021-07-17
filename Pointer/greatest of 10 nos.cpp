#include<stdio.h>
#include<conio.h>
main()
{
	int b,i,max=0,*p;
	p=&max;
	
	printf("enter no. 1 \t");
	scanf("%d",p);
	
	for(i=2;i<=10;i++)
	{
		printf("enter no. %d \t",i);
		scanf("%d",&b);
		
		if(b>(*p))
		*p=b;
	}
	printf("\n greatest no. = %d",(*p));
	
	getch();
}
