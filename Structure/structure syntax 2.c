#include<stdio.h>
struct student 
{
	char a;
	int i;
};
	void main()
	{
		struct student s;
		s.a='A';
		s.i=1;
				
		printf("%d\n",s.i);
		printf("%c",s.a);
		
		getch();
	}
