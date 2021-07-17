#include<stdio.h>
void raj(int i,int j)
{
	int f;
	for(f=i;f<j;f++)
	{
		printf("%d \t",f);
	}
}

void main()
{
	raj(10,20);
	getch();
}
