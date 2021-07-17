#include<stdio.h>
#include<string.h>

struct student
{
	char name[20];
	int roll;		
}s[5];

void main()
{
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("enter roll no. \t");
		scanf("%d",&s[i].roll);
		
		printf("enter student name \t");
		scanf("%s",s[i].name);
	}
	
	for(i=0;i<5;i++)
	{
		printf("roll no. = %d \t name=%s\n",s[i].roll,s[i].name);
	}
	getch();
}
