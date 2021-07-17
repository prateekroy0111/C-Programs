#include <stdio.h>  
void main(int argc, char *argv[] )  {  
  
   printf("Program name is: %s\n", argv[0]);  
   
   if(argc < 2){  
      printf("No argument passed through command line.\n");  
   }  
   else{
   		int i=1;
   		while(argv[i]!='\0')
	    {
	   		printf("argument is: %s\n", argv[i]);
	   		i++;
		}  
    }  
    printf("value of argc is: %d\n", argc);
}  
