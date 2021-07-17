#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,*x;
	x=&num;
	
	printf("enetr a no. to get its table \t");
	scanf("%d",&num);
	
	for(i=1;i<11;i++)
	{
		printf("%d * %d = %d \n",*x,i,(*x)*i);
	}
	getch();
}
