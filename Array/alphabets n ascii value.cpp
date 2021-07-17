#include<stdio.h>
#include<conio.h>
main()
{
	int n[58],i;
	for(i=0;i<=57;i++)
	{
		n[i]='A'+i;
		printf("%c  %d \n",n[i],n[i]);
	}
	getch();
}

