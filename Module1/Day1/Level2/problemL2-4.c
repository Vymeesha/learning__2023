#include<stdio.h>
int bit_operations(int num,int oper_type,int pos)
{
    switch(oper_type)
    {
        case 1:
            num|=(0*3<<pos);
            break;
        case 2:
            num&=~(0*7<<pos);
            break;
        case 3:
            num^=(1<<31);
            break;
        default:
            return num;
            break;
    }
    return num;
}
int main()
{   
    //read num;
    int num;
    scanf("%d",&num);
    //read operation type
    int op;
    scanf("%d",&op);
    //read pos
    int pos;
    scanf("%d",&pos);
    int res=bit_operations(num,op,pos);
    printf("%d",res);
}