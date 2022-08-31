#include <stdio.h>

//Programa de entrar com um número, e imprimir o digito digitado de forma invertida

int main(void)
{
    /*int unidade, dezena;

    printf("Entre com um inteiro de 2 dígitos: \n");
    scanf("%1d%1d", &dezena, &unidade);
    printf("Números invertidos: %d%d\n", unidade, dezena);*/

    int num;

    printf("Entre com um inteiro de 2 dígitos: ");
    scanf("%d", &num);
    printf("Número invertido: %d%d\n", num % 10, num / 10);

    return 0;
}