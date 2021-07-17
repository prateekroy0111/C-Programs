#include<stdio.h>  
int factorial(int n)    
{    
    if (n <= 0)    
        return 1; /*Terminating condition*/ 
	else   
    	return (n * factorial(n -1));    
}   
void main(){    
	int fact;    
	fact=factorial(5);    
	printf("factorial of 5 is %d",fact);    
	getch();  
}    
