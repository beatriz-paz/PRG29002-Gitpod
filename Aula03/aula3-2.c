#include <stdio.h>

int main(void)
{
    int num1, den1;
    int num2, den2;
    int num3, den3;  // Fração produto
    int num4, den4; // Soma das frações

    printf("Entre com a primeira fração: ");
    scanf("%d/%d", &num1, &den1);

    printf("Entre com a segunda fração: ");
    scanf("%d/%d", &num2, &den2);

    num3 = num1 * num2;
    den3 = den1 * den2;

    num4 = (num1 * den2) + (num2 * den1);
    den4 = den1 * den2;

    printf("Produto da fração: %d/%d\n", num3, den3);
    printf("Soma da fração: %d/%d\n", num4, den4);

        return 0;
}