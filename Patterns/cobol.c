#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k;
	char n[10]="cobol";
	k=strlen(n);
	for(i=0;i<=k;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%c",n[j]);
		}
		printf("\n");
	}
	
	getch();
}
