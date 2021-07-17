#include<stdio.h>
#include<conio.h>
 main()
{
	int a[10],max,i;
	for(i=0;i<10;i++)
	{
		printf("enter %d array element \t",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	max=a[0];
	for(i=1;i<10;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	
	printf("greatest no. = %d",max);
	getch();
}
