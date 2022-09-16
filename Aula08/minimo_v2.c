#include <stdio.h>

int minimo3(int a, int b, int c);
int minimo2(int a, int b);

int main(void)
{
    int n1, n2, n3;
    printf("Entre com 3 números inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("O menor é %d\n", minimo3(n1, n2, n3));

    return 0;
}

int minimo2(int a, int b)
{
    if (a < b) {
        return a;
    }else {
        return b;
    }
}

int minimo3(int a, int b, int c)
{
    return minimo2(minimo2(a, b), c);
}