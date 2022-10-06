#include <stdio.h>

void imprimi_triangulo(int num_linha);

int main(void)
{
    int num_linha;
    printf("Entre com um inteiro positivo: ");
    scanf("%d", &num_linha);
    printf("\n");
    imprimi_triangulo(num_linha);

    return 0;
}

void imprimi_triangulo(int num_linha)
{
    int i, n, valor = 0;

    for (i = 1; i <= num_linha; i++) {
        for (n = 1; n <= i; n++) {
            valor++;
            printf("%d ", valor);
        }
        printf("\n");
    }
}
