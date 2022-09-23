#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, i;
    double valor, min, max, med;

    min = INFINITY;
    max = -INFINITY;
    med = 0.0;

    printf("Entre com um número de valores: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
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