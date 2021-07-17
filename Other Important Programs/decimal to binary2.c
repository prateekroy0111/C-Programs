#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i,j;
	int bin[50];
	printf("enter a num ");
	scanf("%d",&dec);
	i=0;
	while(dec>0)
	{
		bin[i]=dec%2;
		dec=dec/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d ",bin[j]);
	}	
	getch();	
}
