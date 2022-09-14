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

    if (a < b && a < c) {
        min = a;
    } else if (b < c) {
            min = b;
        } else {
            min = c;
        }
    return min;
}