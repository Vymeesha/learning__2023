#include<stdio.h>
struct Complex
{
    double real,imag;
};
void read(struct Complex *c)
{
    scanf("%lf%lf",&(c->real),&(c->imag));
}
void write(struct Complex c)
{
    printf(" is : %.2lf + %.2lfi\n",c.real,c.imag);
}
struct Complex addC(struct Complex c1,struct Complex c2)
{
    struct Complex res;
    res.real=c1.real+c2.real;
    res.imag=c1.imag+c2.imag;
    return res;
}
struct Complex pdtC(struct Complex c1,struct Complex c2)
{
    struct Complex res;
    res.real=(c1.real*c2.real)-(c1.imag*c2.imag);
    res.imag=(c1.real*c2.imag)+(c1.imag*c2.real);
    return res;
}
int main()
{
    struct Complex c1,c2,sum,pdt;
    read(&c1);
    read(&c2);
    sum=addC(c1,c2);
    printf("Sum ");
    write(sum);
    pdt=pdtC(c1,c2);
    printf("Product ");
    write(pdt);
}