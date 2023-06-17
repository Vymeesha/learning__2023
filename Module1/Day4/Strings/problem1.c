#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(isupper(str[i]))
        {
            str[i]=tolower(str[i]);
        }
        else if(islower(str[i]))
        {
            str[i]=toupper(str[i]);
        }
    }
    printf("Toggle Case of given string is %s",str);
}