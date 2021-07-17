#include <stdio.h>

void main()
{
    char str[100];
    int i=0,num,sum=0;
	
    printf("enter num  ");
    scanf("%s",&str);
    while(str[i]!='\0')
    {
       if(str[i]=='i'){
       		i++;
       		continue;
	   }
       num=str[i]-'0';
       sum=sum+num;
	   printf("%d\t",num);
	   i++;
    }
    printf("sum = %d",sum);
}
