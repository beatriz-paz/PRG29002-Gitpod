#include <stdio.h>

int main(void)
{
    int n, i, resto;
    int aparece[10] = { };

    printf("Entre com um inteiro: ");
    scanf("%d", &n);

    printf("Digito:       0  1  2  3  4  5  6  7  8  9 \n");

    while (n > 0) {
        resto = n % 10;
        n = n / 10;

        aparece[resto] += 1;

    }

    printf("Ocorrencias:  ");
    for (i = 0; i < 10; i++) {
        printf("%d  ", aparece[i]);
    }
    printf("\n");

    return 0;
}