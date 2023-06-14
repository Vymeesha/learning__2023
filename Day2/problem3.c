#include<stdio.h>
int main()
{
    //read size of array
    int size;
    scanf("%d",&size);
    int array[size],sum=0;
    //read array elements
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i+=2)
    {
        sum=sum+array[i];
    }
    printf("Sum of alternate elements is : %d",sum);
}