#include<stdio.h>
#include<conio.h>
main()
{
	int num,i,f=0;
 
    printf("Enter a number to check if it is prime\n");
    scanf("%d",&num);
	
 	for(i=1;i<=num;i++)
   	{
   		if(num%i==0)
	    {
	   		f++;
	    }	
	}
	
	if(f==2)
		printf("prime");
	else
		printf("not-prime");
	 
    getch();
}
/*for(i=2;i<=(num/2);i++)
   	{
   		if(num%i==0)
		   {
		   		f=1;
		   		break;
		   }	
	}
	if(f==0)
	printf("prime");
	else
	printf("not-prime");
*/
/*for(i=2;i<=(num/2);i++)
   	{
   		if(num%i==0)
		   {
		   		f++;
		   }	
	}
	if(f==0)
	printf("prime");
	else
	printf("not-prime");
*/
