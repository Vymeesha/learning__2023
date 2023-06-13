#include<stdio.h>
int find(char ch)
{
    int res;
    switch(ch)
    {
        case 'A' ... 'Z':
            res=1;
            break;
        case 'a' ... 'z':
            res=2;
            break;
        case '0' ... '9':
            res=3;
            break;
        case '!' ... '/':
            res=4;
            break;
        case ':' ... '@':
            res=4;
            break;
        case '[' ... '_':
            res=4;
            break;
        default:
            res=5;
            break;
    }
    return res;
}
int main()
{
    char ch;
    ch=getchar();
    int result=find(ch);
    printf("%d",result);
}