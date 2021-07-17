#include <stdio.h>

void main()
{
    char c;
    printf("character \t decimal \t hexadecimal\n");
	for(c='A';c<='z';c++){
		printf("%c \t\t %d \t\t %x\n",c,c,c);
	}
    	
    getch();
}
