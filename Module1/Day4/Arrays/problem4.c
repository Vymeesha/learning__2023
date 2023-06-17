#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num],oddsum=0,evensum=0;
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            evensum+=arr[i];
        }
        if(arr[i]%2!=0)
        {
            oddsum+=arr[i];
        }
    }
    printf("Difference between even and odd elements in array is %d",evensum-oddsum);
    
}