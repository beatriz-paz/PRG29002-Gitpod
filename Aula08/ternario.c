#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 2;

    //printf("%d\n", 1 ? 10 : 50); //retorna o 10 porque C considera tudo que não for 0, verdade
    //printf("%d\n", 0 ? 10 : 50); //retorna 50, porque 0 é falso

    printf("Mínimo: %d\n", a < b ? a : b);

    int c = -10;
    printf("Valor em módulo: %d\n", c < 0 ? -c : c);
    
    return 0;
}