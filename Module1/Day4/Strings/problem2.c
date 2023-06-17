#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int len=strlen(str);
    int res=0,ival=0;
    for(int i=0;i<len-1;i++)
    {
        ival=0;
        ival=str[i]-'0';
        res=res*10+ival;
    }
    printf("Converted String as Integer is %d",res);
}