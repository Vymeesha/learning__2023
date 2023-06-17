#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num],size,min=0,max=0;
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    size=sizeof(arr)/sizeof(arr[0]);
    max=arr[0],min=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Minimum and Maximum elements in array are %d and %d respectively",min,max);
}