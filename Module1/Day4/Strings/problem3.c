#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int hrs,mins,secs;
    char *token,*delimiter=":";
    //EXTRACT HOURS
    token=strtok(str,delimiter);
    hrs=strtoul(token,NULL,10);
    //EXTRACT MINS
    token=strtok(NULL,delimiter);
    mins=strtoul(token,NULL,10);
    //EXTRACT SECS
    token=strtok(NULL,delimiter);
    secs=strtoul(token,NULL,10);
    int totalsecs=hrs*3600+mins*60+secs;
    printf("Total Seconds %d",totalsecs);
}