#include<stdio.h>
#include<conio.h>
#include<math.h>

int bin_to_dec(int);
int dec_to_bin(int);
void dec_to_hex(int);
void bin_to_hex(int);
int dec_to_oct(int);
	
	int bin_to_dec(int bin)
	{
		int i,j,sum;
		int dec[10];
		i=0;
		while(bin>0)
		{
			dec[i]=(bin%10)*pow(2,i);
			bin=bin/10;
			i++;
		}
		sum=0;
		for(j=i-1;j>=0;j--)
		{
			sum+=dec[j];
		}
		return sum;
	}
	
	int dec_to_bin(int dec)
	{
		int i,j;
		int bin[50];
		i=0;
		while(dec>0)
		{
			bin[i]=dec%2;
			dec=dec/2;
			i++;
		}
		printf("binary no = ");
		for(j=i-1;j>=0;j--)
		{
			printf("%d ",bin[j]);
		}	
	}
	
	void dec_to_hex(int dec)
	{
		int i,j,rem;
		char hexaDeciNum[100];
	
	    while(dec!=0) 
	    {    
	        rem=0; 
	        rem=dec%16; 
	        if(rem<10) 
	        { 
				hexaDeciNum[i]=rem+48; 
				i++; 
	        } 
	        else
	        { 
				hexaDeciNum[i]=rem+55; 
				i++; 
			} 
			dec=dec/16; 
		}
		printf("hexadecimal no = ");
		for(j=i-1;j>=0;j--) 
			printf("%c",hexaDeciNum[j]); 
	}
	
	void bin_to_hex(int bin)
	{
		int i,j,rem,dec;
		char hexaDeciNum[100];
		
		dec=bin_to_dec(bin);
	
	    while(dec!=0) 
	    {    
	        rem=0; 
	        rem=dec%16; 
	        if(rem<10) 
	        { 
				hexaDeciNum[i]=rem+48; 
				i++; 
	        } 
	        else
	        { 
				hexaDeciNum[i]=rem+55; 
				i++; 
	        } 
			dec=dec/16; 
	    }
		printf("hexadecimal no = ");
	    for(j=i-1;j>=0;j--) 
			printf("%c",hexaDeciNum[j]); 
	}
	
	int dec_to_oct(int dec)
	{
		int i,j;
		int oct[50];
		i=0;
		while(dec>0)
		{
			oct[i]=dec%8;
			dec=dec/8;
			i++;
		}
		printf("octal no = ");
		for(j=i-1;j>=0;j--)
		{
			printf("%d",oct[j]);
		}	
	}
	
void main()
{
	int choice;
	char c;
	
	do{
		printf("\n\n\nPress 1 for Binary to Decimal \nPress 2 for Decimal to Binary \nPress 3 for Decimal to Hexadecimal \nPress 4 for Binary to Hexadecimal \nPress 5 for Decimal to Octal \n\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				printf("----------Binary to Decimal----------\n");
				long int bin;
				printf("enter the binary number \t");
				scanf("%d",&bin);
				printf("decimal no = %d",bin_to_dec(bin));
			}
			break;
			
			case 2:
			{
				printf("----------Decimal to Binary----------\n");
				int dec;
				printf("enter the decimal number \t");
				scanf("%d",&dec);
				dec_to_bin(dec);
			}
			break;
				
			case 3:
			{
				printf("----------Decimal to Hexadecimal----------\n");
				int dec;
				printf("enter the decimal number \t");
				scanf("%d",&dec);
				dec_to_hex(dec);
			}
			break;
			
			case 4:
			{
				printf("----------Binary to Hexadecimal----------\n");
				int bin;
				printf("enter the binary number \t");
				scanf("%d",&bin);
				bin_to_hex(bin);
			}
			break;
			
			case 5:
			{
				printf("----------Decimal to Octal----------\n");
				int dec;
				printf("enter the decimal number \t");
				scanf("%d",&dec);
				dec_to_oct(dec);
			}
			break;
				
			default:
				printf("ERROR \n\n\n");
		}
		
		printf("\n\nenter Y or y to run again   ");
		scanf(" %c",&c);
		
	}while(c=='y'||c=='Y');
		
	getch();	
}
