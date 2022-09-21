#include <stdio.h>

double fatorial(int n);

int main(void)
{
    int n;
    printf("Entre com um número: ");
    scanf("%d", &n);
    printf("O fatorial do número é: %lg\n", fatorial(n));
    return 0;
}

double fatorial(int n)
{
    int i;
    double f;
    f = 1;
    for (i = 2; i <= n; i++) {
    f = f * i;
    }
    return f;
}