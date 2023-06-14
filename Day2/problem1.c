#include<stdio.h>
int main()
{
    double num;
    scanf("%lf",&num);
    unsigned long long *ptr=(unsigned long long *)&num;
    unsigned long long hex=(*ptr>>52)&0x7FF;
    printf("The exponent in hexadecimal is : 0x%llX\n",hex);
    printf("The exponent in binary is : 0b");
    for(int i=10;i>=0;i--)
    {
        unsigned long long bin=(hex>>i)&1;
        printf("%llu",bin);
    }
    printf("\n");
}