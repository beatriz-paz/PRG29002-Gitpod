#include <stdio.h>
#include <math.h>

typedef struct {
    double real;
    double imag;
} Complex;

double modulo(Complex z);

int main(void)
{
    Complex z1 = {0, 1}; // i
    Complex z2 = {3, 4}; // 3 + 4i

    printf("A parte real de z1 é: %lg, e a imaginária é: %lg\n", z1.real, z1.imag);
    printf("O modulo é: %lg\n", modulo(z1));
    
    return 0;
}

double modulo(Complex z)
{
    return sqrt(z.real*z.real + z.imag*z.imag);
}