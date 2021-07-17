#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k,l,sp=0,spp=8;
	
	for(i=5;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d ",j);	
			}
			
			for(k=1;k<=sp;k++)
			{
				printf("  ");
			}
			sp=sp+2;
			
			for(l=i-1;l>=1;l--)
			{
				printf(" %d",l);
			}
	
				printf("\n");
		}
		
	for(i=1;i<=5;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d ",j);	
			}
			
			for(k=1;k<=spp;k++)
			{
				printf("  ");
			}
			spp=spp-2;
			
			for(l=i-1;l>=1;l--)
			{
				printf(" %d",l);
			}
	
				printf("\n");
		}	
	
getch();
}
