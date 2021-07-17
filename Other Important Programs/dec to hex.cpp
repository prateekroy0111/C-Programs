#include<stdio.h>
#include<conio.h>
#include<math.h>
void dec_to_hex(int);

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
	
int main()
{
	int dec;
	printf("enter the decimal number ");
	scanf("%d",&dec);
	dec_to_hex(dec);
	return 0;	
}
