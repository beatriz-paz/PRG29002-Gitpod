#include <stdio.h>

int main(void)
{
    double nota;
    printf("Entre com sua nota: ");
    scanf("%lf", &nota);

    if (nota >= 0 && nota < 6) {
        printf("Insuficiente:(\n");
    } else if (nota < 7) {
        printf("Regular.\n");
    } else if (nota < 9) {
        printf("Muito bom!\n");
    } else if (nota <= 10) {
        printf("Excelente!!!\n");
    } else {
        printf("Nota inválida.\n");
    }

    return 0;
}