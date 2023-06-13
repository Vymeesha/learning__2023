#include<stdio.h>
int great(int num1,int num2,int num3)
{
    int i;
    if(num1>num2 && num1>num3)
    {
        i=num1;
    }
    else if(num2>num1 && num2>num3)
    {
        i=num2;
    }
    else
    {
        i=num3;
    }
    return i;
}
int main()
{   
    int num1,num2,num3;
    //reading three numbers
    scanf("%d %d %d",&num1,&num2,&num3);
    int res=great(num1,num2,num3);
    printf("%d is greatest number among three numbers",res);
}