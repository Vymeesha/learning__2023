#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num],size,sum=0,avg=0;
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    size=sizeof(arr)/sizeof(arr[0]);
    avg=sum/size;
    printf("Sum and Average of array elements are %d and %d respectively",sum,avg);
}