#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num],size;
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    size=sizeof(arr)/sizeof(arr[0]);
    int start=0,end=size-1,temp=0;
    for(int i=0;i<size;i++)
    {
        while(start<end)
        {
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
    }
    printf("Reverse of Array:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
}