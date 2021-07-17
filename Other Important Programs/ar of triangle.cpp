#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,c,s=0,ar=0;
	printf("enter a =");
	scanf("%d",&a);
	printf("enter b =");
	scanf("%d",&b);
	printf("enter c =");
	scanf("%d",&c);
	
	s=(a+b+c)/2;
	printf("s = %d \n\n",s);
	
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%d",ar);
	
	getch();
}
