#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i;
	printf("enter 10 array elements: \n");
	
	i=0;
	loop:
	if(i<10)
	{
		scanf("%d",&a[i]);
		i++;
		goto loop;
	}
	
	i=0;
	start:
	if(i<10)
	{
		if(a[i]>0)
		{
			printf("%d is +ve no. \n",a[i]);
			i++;
			goto start;
		}			
		else if(a[i]<0)
		{
			printf("%d is -ve no. \n",a[i]);
			i++;
			goto start;
		}
		else
		{
			printf("%d is 0 \n",a[i]);
			i++;
			goto start;
		}
	}
	else
	{
		getch();
	}
	
}
