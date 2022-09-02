#include <stdio.h>

//função que recebe valor em reais e retornar o valor desenhando ao redor *

void etiqueta(double valor); // protótipo da função

int main(void)
{
    etiqueta(150.2);
    printf("\n");
    etiqueta(24.99);

    return 0;
}

void etiqueta(double valor)
{
    printf("**************\n");
    printf("*  R$%.2lf  *\n", valor);
    printf("**************\n");
}