#include <stdio.h>

//função que recebe valor em reais e retornar o valor desenhando ao redor *

void etiqueta(double valor);  // protótipo da função
void ola_mundo(void);

int main(void)
{
    ola_mundo();
    printf("\n\n");
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

void ola_mundo(void)
{
    printf("Olá mundo!!");
}