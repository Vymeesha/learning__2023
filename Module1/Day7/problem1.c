#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr1, *fptr2;
    fptr1=fopen("sourcefile.txt","r");
    fptr2=fopen("destfile.txt","w");
    if(fptr1==NULL)
    {
        printf("Cannot open file\n");
        exit(0);
    }
    else
    {
        char ch;
        while((ch=fgetc(fptr1))!=EOF)
        {
            fputc(ch,fptr2);
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}