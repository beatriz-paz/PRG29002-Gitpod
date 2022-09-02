#include <stdio.h>

int teste(int a, int b); //protótipo da função, para o C entender que existe essa função abaixo do requerimento dela 

int main(void)
{
    int x, y;
    x = 10;
    y = 30;

    printf("O X vale: %d e o Y vale: %d\n", x, y);
    printf("O resultado é: %d\n", teste(x, y)); // função teste requerida
    printf("O X vale: %d e o Y vale: %d\n", x, y);

    teste(40, 50);

    return 0;
}

int teste(int a, int b) //função teste 
{
    a = a / 2;
    return 2 * a + b;
}