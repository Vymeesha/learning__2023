#include<stdio.h>
#include<limits.h>
int largestnum(int num)
{
    int large=INT_MIN;
    for(int i=0;i<4;i++)
    {
        int temp=num,divi=1;
        for(int j=0;j<i;j++)
        {
            divi*=10;
        }
        temp=(temp/(divi*10))*divi+(temp%divi);
        if(temp>large)
        {
            large=temp;
        }
    }
    printf("%d is the largest number formed\n",large);
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
        if(count!=4)
        {
            printf("%d is not four digit number\n",num);
        }
        else
        {
            largestnum(num);
        }
    }
}