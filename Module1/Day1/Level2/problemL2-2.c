#include<stdio.h>
char grade(int percent)
{
    char r;
    switch(percent)
    {
        case 90 ... 100:
            r='A';
            break;
        case 75 ... 89:
            r='B';
            break;
        case 60 ... 74:
            r='C';
            break;
        case 50 ... 59:
            r='D';
            break;
        case 36 ... 49:
            r='E';
            break;
        case 0 ... 35:
            r='F';
            break;
        default:
            r='-';
            break;
    }
    return r;
}
int main()
{   
    //read percentage
    int percent;
    scanf("%d",&percent);
    printf("%d -> Grade %c\n",percent,grade(percent));
    printf("65 -> Grade %c\n",grade(65));
    printf("66 -> Grade %c\n",grade(66));
    printf("67 -> Grade %c\n",grade(67));
    printf("68 -> Grade %c\n",grade(68));
    printf("69 -> Grade %c\n",grade(69));
    printf("70 -> Grade %c\n",grade(70));
}