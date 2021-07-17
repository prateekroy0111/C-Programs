#include<stdio.h>
#include<conio.h>
#include<string.h>

struct stu
{
	int roll,m1,m2,m3,m4,m5,m6;
	float avg;
	char n[10],grd[3];
};

main()

{
	int i;
	int j;
	printf("enter total no. of students \t");
	scanf("%d",&j);
	struct stu s[j];
	
	for(i=0;i<j;i++)
	{
		printf("enter roll no.  \t");
		scanf("%d",&s[i].roll);
		
		printf("enter name  \t");
		scanf("%s",s[i].n);
		
		printf("enter six subject marks  \n");
		scanf("%d%d%d%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5,&s[i].m6);
		
		if((s[i].m1<=100) &&(s[i].m2<=100) &&(s[i].m3<=100) &&(s[i].m4<=100) &&(s[i].m5<=100) &&(s[i].m6<=100))
		{
			s[i].avg=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5+s[i].m6)/6.0;
			printf("\n");
			
			if(s[i].avg>=90)
			{
				strcpy(s[i].grd,"A+");
			}
			else if(s[i].avg>80&&s[i].avg<=90)
			{
				strcpy(s[i].grd,"A");
			}
			else if(s[i].avg>70&&s[i].avg<=80)
			{
				strcpy(s[i].grd,"B+");
			}
			else if(s[i].avg>60&&s[i].avg<=70)
			{
				strcpy(s[i].grd,"B");
			}
			else if(s[i].avg>50&&s[i].avg<=60)
			{
				strcpy(s[i].grd,"C");
			}
			else if(s[i].avg>40&&s[i].avg<=50)
			{
				strcpy(s[i].grd,"D");
			}
			else if(s[i].avg<40)
			{
				strcpy(s[i].grd,"FAIL");
			}
		}
		
		else
		{
			printf("ERROR : Marks should be less than hundred \n\n");
		}	
	}
	
	
	for(i=0;i<j;i++)
	{
		printf("%d \t %s \t %f \t %s",s[i].roll,s[i].n,s[i].avg,s[i].grd);
		printf("\n");
	}
	getch();

}
