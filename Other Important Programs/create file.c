#include <stdio.h>  
void main(){  
   FILE *fp;  
   fp = fopen("file.txt", "w");//opening file  
   fprintf(fp, "Hello file by fprintf...\n");//writing data into file  
   fprintf(fp, "Hello file \n");
   fprintf(fp, "fprintf...\n");
   fclose(fp);//closing file  
   printf("file created");
   getch();
}  

