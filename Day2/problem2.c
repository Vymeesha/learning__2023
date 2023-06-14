#include<stdio.h>
int swap(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
    printf("After swapping num1=%d and num2=%d",*num1,*num2);
}
int main()
{
    //read two numbers
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("Before swapping num1=%d and num2=%d\n",num1,num2);
    swap(&num1,&num2);   
}