#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i;
	printf("enter 10 array elements: \n");
	
	for(i=0; i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		printf("%d even no. \n",a[i]);
		else
		printf("%d odd no. \n",a[i]);
	}
	
	getch();
}
