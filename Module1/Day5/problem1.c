#include<stdio.h>
struct Box
{
    double length,width,height;
};
int main()
{
    struct Box b;
    scanf("%lf%lf%lf",&b.length,&b.width,&b.height);
    struct Box *bptr=&b;
    //using (*) and (.)
    double volume1=(*bptr).length*(*bptr).width*(*bptr).height;
    double surfacearea1=2*((*bptr).length*(*bptr).width+(*bptr).length*(*bptr).height+(*bptr).width*(*bptr).height);
    //using(->)
    double volume2=bptr->length*bptr->width*bptr->height;
    double surfacearea2=2*(bptr->length*bptr->width+bptr->length*bptr->height+bptr->width*bptr->height);
    printf("Volume1:%lf Surfacearea1:%lf\nVolume2:%lf Surfacearea2:%lf",volume1,surfacearea1,volume2,surfacearea2);
}