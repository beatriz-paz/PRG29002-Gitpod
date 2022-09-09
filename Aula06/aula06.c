#include <stdio.h>

void dobra(double *x)// * na frente da variável para conseguir não subustituir a mesma na função main
{
    *x = *x * 2.0;
}

int main(void)
{
    double a = 3.0;

    printf("Valor incial: %lg\n", a);
    dobra(&a);  // & para substituir o valor da variavel
    printf("Valor dobrado: %lg\n", a);
    dobra(&a);
    dobra(&a);
    printf("Valor multiplicado: %lg\n", a);

    return 0;
}