#ifndef _COMPLEX_H_
#define _COMPLEX_H_

struct complex_
{
    double a;//real part
    double b;//imaginary part
};

typedef struct complex_ Complex;

Complex createComplex(double a,double b);
//Complex complexAddition(const Complex c1, const Complex c2);
Complex complexMultiplication(const Complex c1, const Complex c2);

#endif