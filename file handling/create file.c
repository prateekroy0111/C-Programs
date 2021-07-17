#include <stdio.h>  
main(){  
   FILE *fp;  
   fp = fopen("file.txt", "w");//opening file  
   fprintf(fp, "Hello file by fprintf...\nhello\t\thello");//writing data into file  
   fclose(fp);//closing file 
   printf("file created"); 
}  
