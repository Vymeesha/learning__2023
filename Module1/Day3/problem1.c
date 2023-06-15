#include<stdio.h>
int pseq(int num)
{
    for(int i=1;i<=num;i++)
    {
        printf("%d",i);
    }
    for(int i=num;i>0;i--)
    {
        printf("%d",i);
    }
    printf("\n");
}
int pspace(int num)
{
    for(int i=1;i<=num;i++)
    {
       printf(" ");
    }
}
int pattern(int num)
{
    for(int i=num;i>0;i--)
    {
        pseq(i);
        pspace(2*(num-i));
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    pattern(num); 
}