#include <stdio.h>

int main(void)
{
    int i, j, l, c;
    double soma, media;
    double matriz[100][100];
    printf("Entre com as dimensoes da matriz: ");
    scanf("%d%d", &l, &c);
    printf("Entre com os elementos da matriz: \n");

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            scanf("%lg", &matriz[i][j]);
        }
    }

    printf("Entre com o indice da coluna: ");
    scanf("%d", &c);

    for (i = 0; i < l; i++) {
        for (j = c; j == c; j++) {
            soma += matriz[i][j];
        }
    }

    printf("Media da coluna: %lg\n", media = soma / i);

    return 0;
}