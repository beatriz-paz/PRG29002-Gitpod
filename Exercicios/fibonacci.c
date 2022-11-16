#include <stdio.h>

int main(void)
{
    int f0, f1, a, b, i = 0;
    int sequencia[10] = { };

    printf("Entre com os termos iniciais: ");
    scanf("%d %d", &f0, &f1);

    printf("Entre com os coeficientes: ");
    scanf("%d %d", &a, &b);

    while (i < 10) {
        if (i == 0) {
            sequencia[i] = f0;
            i++;
        } else if (i == 1) {
            sequencia[i] = f1;
            i++;
        } else {
            sequencia[i] = a * (sequencia[i -1]) + b * (sequencia[i -2]);
            i++;
        }
    }

    i = 0;

    printf("Sequencia: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", sequencia[i]);
    }
    printf("\n");

    return 0;
}