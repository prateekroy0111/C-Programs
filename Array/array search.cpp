#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,num;
	printf("enter 10 array elements:\t");
	
	for(i=0; i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("search element: \t");
	scanf("%d",&num);
	
	for(i=0; i<10;i++)
	{
		if(num==a[i])
			printf("element found at %d index ",i);
	}
	
	getch();
}
