#include<stdio.h>

void main()
{
	int i=1,dec=0,bin,rem;
	
	printf("enter binary no.\t");
	scanf("%d",&bin);
	
	while(bin>0)
	{
		rem=bin%10;
		dec=dec+rem*i;
		i=i*2;
		bin=bin/10;
	}
	printf("%d",dec);
	
	getch();
	
}
