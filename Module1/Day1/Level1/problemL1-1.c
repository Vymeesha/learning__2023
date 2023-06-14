#include<stdio.h>
int find(int num1,int num2,int op)
{
     switch(op)
    {
        case 0:
            //using if-else
            if(num1>num2)
            {
                printf("%d is greatest number",num1);
            }
            else
            {
                printf("%d is greatest number",num2);
            }
            break;
        case 1:
            //using ternary operator
            printf("%d is greatest number",(num1>num2?num1:num2));
            break;
        default:
            printf("Enter a valid option");
    }
}
int main()
{   
    int num1,num2;
    //reading two numbers
    scanf("%d %d",&num1,&num2);
    //reading option
    int option;
    //0 -> if-else
    //1 -> ternary operator
    scanf("%d",&option);
    find(num1,num2,option);
}
