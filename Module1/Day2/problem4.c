#include<stdio.h>
int count(int num)
{
    int c=0;
    while(num!=0)
    {
        if(num & 1)
        {
            c++;
        }
        num>>=1;
    }
    return c;
}
int main()
{
    int array[]={0x1,0xF4,0x10001},size=0,totalbits=0;
    size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i+=1)
    {
        totalbits+=count(array[i]);
    }
    printf("Totalnumber of bits set in array are : %d bits",totalbits);
}