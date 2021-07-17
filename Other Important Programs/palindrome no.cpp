#include<stdio.h>
#include<conio.h>
 main()
{
	int num,num1,rem,rev;
	printf("enter a no. to check its palindrome or not \t");
	scanf("%d",&num);
	num1=num;
	rev=0;
	while(num>0)
	{
		rem=num%10;
	 	rev=rev*10+rem;
	 	num=num/10;
	} 
	
	/*printf("value of reverse= %d \n",rev);
	printf("value of num = %d\n",num);
	printf("value of num1 = %d\n",num1);*/
	
	if(num1==rev)
		printf("palindrome");
		
	else
		printf("not palindrome");
	getch();
}
