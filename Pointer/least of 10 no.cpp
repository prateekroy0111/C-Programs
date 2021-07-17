#include<stdio.h>
#include<conio.h>
main()
{
	int b,i,min=0,*p;
	p=&min;
	
	printf("enter no. 1 \t");
	scanf("%d",p);
	
	for(i=2;i<=10;i++)
	{
		printf("enter no. %d \t",i);
		scanf("%d",&b);
		
		if(*p>b)
		*p=b;
	}
	printf("\n least no. = %d",*p);
	
	getch();
}
