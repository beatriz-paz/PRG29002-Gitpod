#include <stdio.h>

int minimo(int a, int b, int c);

int main(void)
{
    int n1, n2, n3;
    printf("Entre com 3 números inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("O menor é %d\n", minimo(n1, n2, n3));

    return 0;
}

int minimo(int a, int b, int c)
{
    int min;
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}