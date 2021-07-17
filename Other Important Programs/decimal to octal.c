#include<stdio.h>
#include<conio.h>

void main()
{
	int dec,i,j;
	int oct[50];
	printf("enter a num ");
	scanf("%d",&dec);
	i=0;
	while(dec>0)
	{
		oct[i]=dec%8;
		dec=dec/8;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d ",oct[j]);
	}	
	getch();	
}
