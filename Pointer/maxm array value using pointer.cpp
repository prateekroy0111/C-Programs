#include<stdio.h>
#include<conio.h>
 main()
{
	int i,sum=0,*p,ar[5],max;
	p=&ar[0];
	
	for(i=0;i<5;i++)
	{
		printf("enter array elements \t");
		scanf("%d",(p+i));
	}
	printf("\n");
	
	max=*p;
	for(i=1;i<5;i++)
	{
		if(*(p+i)>max)
		max=*(p+i);
	}
	
	printf("%d",max);
	getch();
}
