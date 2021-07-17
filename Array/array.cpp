#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i;
	
	
	for(i=0;i<10;i++)
	{
		printf("Enter array value \t");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d \n",a[i]);
	}
	
	getch();
}
