#include<stdio.h>
#include<conio.h>
 main()
{
	int a[3][3],t[3][3],i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter array element \t");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t[j][i]=a[i][j];
			
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",t[i][j]);
		}
		printf("\n");
	}
	getch();
}
