#include<stdio.h>
#include<limits.h>
int smallandlarge(int num)
{
    int i,temp,small=INT_MAX,large=INT_MIN;
    temp=num;
    while(temp!=0)
    {
        int digit=temp%10;
        if(digit<small)
        {
            small=digit;
        }
        if(digit>large)
        {
            large=digit;
        }
        temp/=10;
    }
    printf ("%d is smallest and %d is largest digit in %d\n",small,large,num);
}
int main()
{
    int totalnum;
    scanf("%d",&totalnum);
    for(int i=0;i<totalnum;i++)
    {
        int num,count=0,n;
        scanf("%d",&num);
        n=num;
        while(n!=0)
        {
            n=n/10;
            count++;
        }
        if(count==1)
        {
            printf("%d is Not Valid\n",num);
        }
        else
        {
            smallandlarge(num);
        }
    }
}