#include <stdio.h>

void decompor(double x, double *parte_fracionaria, int *parte_inteira)
{
    *parte_inteira = (int)x;
    *parte_fracionaria = x - *parte_inteira;
}

int main(void)
{
    double x, f;
    int i;

    printf("Entre com um número real: ");
    scanf("%lf", &x);

    decompor(x, &f, &i);
    printf("Parte fracionária: %lg\n", f);
    printf("Parte inteira: %d\n", i);

    return 0;
}