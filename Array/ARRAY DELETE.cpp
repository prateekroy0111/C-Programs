#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],p,n,i;
	for(i=0;i<9;i++)
	{
		printf("enter array elements \t");
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	printf("enter index number \t");
	scanf("%d",&p);
	
	printf("\n");

	
	for(i=p-1;i<10;i++)
	{
		a[i]=a[i+1];
	}
	
	for(i=0;i<9;i++)
	{
		printf("%d \t",a[i]);
	}
	
	getch();
	
}
