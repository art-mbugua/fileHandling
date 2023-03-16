#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("fileName.txt","w");
    fprintf(fp, "%s", "This is the Text input during by the fclose");
    fclose(fp);
    return 0; 
}