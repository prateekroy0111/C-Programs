#include<stdio.h>
#include<conio.h>
main()
{	
	int i,j,mat[4][5],sum;
	float avg;
	
	printf("enter english marks \n enter maths marks \n enter comp marks \n enter science marks \n enter sst marks");
	printf("\n\n");
	
	for(i=0;i<4;i++)
	{
		printf("Student%d\n",i+1);
		for(j=0;j<5;j++)
		{
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	}
	
	printf("Stuednt      english  maths  comp   science   sst    Average\n");
	
	for(i=0;i<4;i++)
	{
		printf("Student%d\t",i+1);
		sum=0;avg=0;
		for(j=0;j<5;j++)
		{
			sum=sum+mat[i][j];
			printf("%d \t",mat[i][j]);
		}
		avg=sum/5.0;
		printf("%.2f\n",avg);
	}
	getch();
}

