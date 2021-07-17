#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	long int bin;
	int i,j,sum;
	int dec[10];
	printf("enter a num ");
	scanf("%d",&bin);
	i=0;
	while(bin>0)
	{
		dec[i]=(bin%10)*pow(2,i);
		bin=bin/10;
		i++;
	}
	sum=0;
	for(j=i-1;j>=0;j--)
	{
		sum+=dec[j];
	}
	printf("decimal num = %d",sum);
	getch();	
}
