#include<stdio.h>
int bit_operations(int num,int oper_type)
{
    switch(oper_type)
    {
        case 1:
            num|=(1<<0);
            break;
        case 2:
            num&=~(1<<31);
            break;
        case 3:
            num^=(1<<15);
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
    int res=bit_operations(num,op);
    printf("%d",res);
}