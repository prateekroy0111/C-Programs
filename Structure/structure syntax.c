#include<stdio.h>
#include<string.h>

struct student 
{
	char name[20];
	int roll;
}s;
void main()
{
	//struct student s;
	printf("enter name  ");
	scanf("%s",&s.name);
	printf("enter roll  ");
	scanf("%d",&s.roll);
	printf("name=%s \t roll=%d",s.name,s.roll);
	
	getch();
}
