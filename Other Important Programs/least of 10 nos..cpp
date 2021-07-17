#include<stdio.h>
#include<conio.h>
 main()
{
	int a,b,i;
	printf("enter first no. \t");
	scanf("%d",&a);
	
	for(i=1;i<=9;i++)
	{
		printf("enter another no. \t");
		scanf("%d",&b);
		
		if(a>b)
		a=b;	
	}
	printf("%d",a);

	getch();
}
