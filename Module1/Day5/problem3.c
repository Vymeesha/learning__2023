#include<stdio.h>
struct Time
{
    int hrs,mins,secs;
};
struct Time TD(struct Time t1,struct Time t2)
{
    struct Time diff;
    int ts1,ts2,differ;
    ts1=t1.hrs*3600+t1.mins*60+t1.secs;
    ts2=t2.hrs*3600+t2.mins*60+t2.secs;
    differ=ts2-ts1;
    diff.hrs=differ/3600;
    differ%=3600;
    diff.mins=differ/60;
    diff.secs=differ%60;
    return diff;
}
int main()
{
    struct Time st,et,timediff;
    scanf("%d%d%d",&st.hrs,&st.mins,&st.secs);
    scanf("%d%d%d",&et.hrs,&et.mins,&et.secs);
    timediff=TD(st,et);
    printf("Time difference is: %d hrs %d mins %d secs\n",timediff.hrs,timediff.mins,timediff.secs);
}