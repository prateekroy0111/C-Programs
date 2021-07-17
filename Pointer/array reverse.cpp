#include<conio.h>
#include<stdio.h>
main()
{
	int i,sum=0,*p,ar[5];
	p=&ar[0];
	
	for(i=0;i<5;i++)
	{
		printf("enter array elements \t");
		scanf("%d",(p+i));
	}
	printf("\n");
	for(i=4;i>=0;i--)
	{
		printf("%d \t",*(p+i));
	}
	
	getch();
}
