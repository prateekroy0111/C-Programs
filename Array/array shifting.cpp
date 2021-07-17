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
	
	printf("enter no. to insert \t");
	scanf("%d",&n);
	
	for(i=9;i<n;i--)
	{
		a[i]=a[i-1];
	}
	a[p]=n;
	
	for(i=0;i<10;i++)
	{
		printf("%d \t",a[i]);
	}
	getch();
}
