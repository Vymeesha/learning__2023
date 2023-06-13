#include<stdio.h>
int main()
{   
    //read percentage
    int percent;
    scanf("%d",&percent);
    if(percent>=90 && percent<=100)
    {
        printf("Grade A");
    }
    else if(percent>=75 && percent<=89)
    {
        printf("Grade B");
    }
    else if(percent>=60 && percent<=74)
    {
        printf("Grade C");
    }
    else if(percent>=50 && percent<=59)
    {
        printf("Grade D");
    }
    else if(percent>=0 && percent<=49)
    {
        printf("Grade E");
    }
}