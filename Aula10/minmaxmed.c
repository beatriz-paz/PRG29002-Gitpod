#include <stdio.h>

int main(void)
{
    int n, i;
    double valor, min, max, med;

    printf("Entre com um número de valores: ");
    scanf("%d", &n);

    printf("Entre com o valor 1: ");
    scanf("%lf", &valor);

    min = max = med = valor;

    for (i = 2; i <= n; i++) {
        printf("Entre com o valor %d: ", i);
        scanf("%lf", &valor);
        if (valor < min) {
            min = valor;
        }
        if (valor > max) {
            max = valor;
        }
        med += valor;
    }
    med /= n;

    printf("Mínimo: %lg\n", min);
    printf("Máximo: %lg\n", max);
    printf("Média: %lg\n", med);

    return 0;
}