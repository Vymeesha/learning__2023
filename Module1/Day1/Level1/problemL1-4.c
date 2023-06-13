#include<stdio.h>
int main()
{   
    int num1,num2;
    //read num1
    printf("num1:   ");
    scanf("%d",&num1);
    //read operator
    printf("read op: ");
    char op;
    scanf(" %c",&op);
    //read num2
    printf("read num2:   ");
    scanf("%d",&num2);
    int result;
    printf("\n");
    switch(op)
    {
        case '+':
            result=num1+num2;
            printf("%d %c %d = %d",num1,op,num2,result);
            break;
        case '-':
            result=num1-num2;
            printf("%d %c %d = %d",num1,op,num2,result);
            break;
        case '*':
            result=num1*num2;
            printf("%d %c %d = %d",num1,op,num2,result);
            break;
        case '/':
            if(num2!=0)
            {
                result=num1/num2;
                printf("%d %c %d = %d",num1,op,num2,result);
            }
            else
            {
                printf("Division by zero is not posibile");
            }
            break;
        case '%':
            result=num1%num2;
            printf("%d %c %d = %d",num1,op,num2,result);
            break;
        default:
            printf("Enter valid operator");
            break;
    }
}