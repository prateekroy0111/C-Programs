#include<stdio.h>
#include<conio.h>
main ()
{
	float a,b,c,d,e,percent;
	printf("Enter marks of five subjects \t");
	scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
	
	percent = (a+b+c+d+e)/5.0;
	printf("Percentage of the Student = %.2f \n",percent);
	
	if(percent>90&&percent<=100)//90<percent<=100 
		printf("grade = A+");
	
		
	else if(percent>80&&percent<=90)
		printf("grade = A");
	
	
	else if(percent>70&&percent<=80)
		printf("grade = B+");
	
	
	else if(percent>60&&percent<=70)
		printf("grade = B");
	
	
	else if(percent>50&&percent<=60)
		printf("grade = C");
	
	else
		printf("grade = fail");
	
	getch();
}
