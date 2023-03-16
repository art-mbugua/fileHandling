#include <stdio.h>

int main () {
   FILE *fp;

   fp = fopen("fseek.txt","w+");
   fputs("This is fseek assignment that I love", fp);
  
   fseek( fp, 7, SEEK_SET );
   fputs(" It seeks out from a set", fp);
   fclose(fp);
   
   return(0);
}