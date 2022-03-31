#include<stdio.h>
#include "complex.h"

Complex complexAddition(const Complex c1,const Complex c2)
{
    Complex c3;
    c3.a=c1.a+c2.a;
    c3.b=c1.b+c2.b;
    return c3;
}

void print(const Complex c)
{
    printf("complex no c:%f+%fi",c.a,c.b);
}

int main()
{
    Complex c1;
    Complex c2;
    c1.a=4;
    c1.b=4;
    c2.a=4;
    c2.b=4;
    Complex c3=complexAddition(c1,c2);
    print(c3);

    return 0;
}
