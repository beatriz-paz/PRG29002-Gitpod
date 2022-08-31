#include <stdio.h>

int main(void)
{
    int x, y;

    x = 10;
    y = 20;

    printf("%d %d\n", x+=1, y+=2); // Atribuição composta

    int a = 1;

    a *= 2;
    a *= 2;
    a *= 2;
    a *= 2;

    printf("%d\n", a);

    double b = 1357;

    printf("%lg ", b);
    b /= 10;
    printf("%lg ", b);
    b /= 10;
    printf("%lg ", b);
    b /= 10;
    printf("%lg \n", b);

    int c = 0; //Operadores de incremento e decremento
    c++;
    c++;
    c--;
    printf("%d\n", c);

    return 0;
}