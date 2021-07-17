#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k,l,sp=0,spp=6;
	
	for(i='d';i>='a';i--)
		{
			for(j='a';j<=i;j++)
			{
				printf("%c ",j);	
			}
			
			for(k=1;k<=sp;k++)
			{
				printf("  ");
			}
			sp=sp+2;
			
			for(l=i;l>='a';l--)
			{
				printf(" %c",l);
			}
	
				printf("\n");
		}
		
	for(i='a';i<='d';i++)
		{
			for(j='a';j<=i;j++)
			{
				printf("%c ",j);	
			}
			
			for(k=1;k<=spp;k++)
			{
				printf("  ");
			}
			spp=spp-2;
			
			for(l=i;l>='a';l--)
			{
				printf(" %c",l);
			}
	
				printf("\n");
		}	
	
getch();
}
