#include<stdio.h>

int main()
{
    int i,j,k,m,sp=2,spp=1;
    for(i=1;i<=3;i++)
    {
        for(k=1;k<=sp;k++)
        {
            printf(" ");
        }sp--;
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(m=j-2;m>=1;m--)
		{
			printf("%d",m);
		}
        printf("\n");  
    }
    
   	for(i=2;i>=1;i--)
    {
        for(k=1;k<=spp;k++)
        {
            printf(" ");
        }spp++;
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
		for(m=j-2;m>=1;m--)
		{
			printf("%d",m);
		}      
        printf("\n");  
    }
    getch();
}
