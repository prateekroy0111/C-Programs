#include<stdio.h>
#include<conio.h>
main()
{
	int num,rev,rem;
	printf("Enter a no. to grt the reverse of it : \t");
	scanf("%d",&num);
	
	rev=0;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("%d",rev);
	getch();
}
