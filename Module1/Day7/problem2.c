#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void sentencecase(char* str)
{
    int cap=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(isspace(str[i]) || str[i] == '.' || str[i]=="\n")
        {
            cap=1;
        }
        else
        {
            if(cap)
            {
                str[i]=toupper(str[i]); 
                cap=0;
            }
            else
            {
                str[i]=tolower(str[i]); 
            }
        }
    }
}
int main()
{
    FILE *fptr1,*fptr2,*fptr3,*fptr4,*fptr5;
    fptr1=fopen("f1","r");
    if(fptr1==NULL)
    {
        printf("Cannot open file\n");
        return 2;
    }
    else
    {
        printf("Enter your option : s || l || u\n");
        char c=getchar();
        switch(c)
        {
            case 's':
                fptr2=fopen("f2","w");
                size_t len=50;
                char*ch2=(char *)calloc(len,sizeof(char));
                while(getline(&ch2,&len,fptr1)!=-1)
                {
                    sentencecase(ch2);
                    fputs(ch2,fptr2);
                }
                fclose(fptr2);
                break;
            case 'l':
                fptr3=fopen("f3","w");
                char ch3;
                while((ch3=fgetc(fptr1))!=EOF)
                {
                    ch3=tolower(ch3);
                    fputc(ch3,fptr3);
                }
                fclose(fptr3);
                break;
            case 'u':
                fptr4=fopen("f4","w");
                char ch4;
                while((ch4=fgetc(fptr1))!=EOF)
                {
                    ch4=toupper(ch4);
                    fputc(ch4,fptr4);
                }
                fclose(fptr4);
                break;
            default:
                fptr5=fopen("f5","w");
                char ch5;
                while((ch5=fgetc(fptr1))!=EOF)
                {
                    fputc(ch5,fptr5);
                }
                fclose(fptr5);
                break;
        }
    }
    fclose(fptr1);
    return 0;
}