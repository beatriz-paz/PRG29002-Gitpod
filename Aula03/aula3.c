#include <stdio.h>

int main(void)
{
    int a = 3, b = 8, c = 2;
    double x;

    x = (double)(a + b) / c; // convertendo para double para conseguir imprimir os decimais 


    printf("%lg\n", x);

    return 0;
}