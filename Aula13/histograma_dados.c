#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

int main(void)
{
    int dado1, dado2, soma, i;
    int hist[11] = {0};
    srand(time(NULL));

    for (i = 0; i < N; i++) {
        dado1 = 1 + rand() % 6;
        dado2 = 1 + rand() % 6;  // gerando 6 número aleatório
        soma = dado1 + dado2;
        //printf("Dado 1: %d  Dado 2: %d  Soma: %d\n", dado1, dado2, soma);
        hist[soma - 2]++;
    }

    for (i = 2; i <= 12; i++) {
        printf("Soma: %d - Caiu: %d - Em porcentagem: %.2lf%%\n", i, hist[i - 2], 100.0 * hist[i - 2] / N);
    }

    return 0;
}