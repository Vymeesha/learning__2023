#include<stdio.h>
int vow(char ch)
{
    int res;
    switch(ch)
    {
        case 'a':
            res=1;
            break;
        case 'e':
            res=1;
            break;
        case 'i':
            res=1;
            break;
        case 'o':
            res=1;
            break;
        case 'u':
            res=1;
            break;
        default:
            res=0;
            break;
    }
    return res;
}
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
    }
    int result=vow(ch);
    if(result==1)
    {
        printf("Vowel");
    }
    else
    {
        printf("Not Vowel");
    }
}