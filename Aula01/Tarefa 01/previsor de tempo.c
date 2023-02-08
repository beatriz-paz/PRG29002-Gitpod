#include <stdio.h>

int main(void)
{
    int barometro;
    int termometro;

    printf("Entre com o numero do barometro (1-Subindo, 2-Estacionario e 3-Baixando): ");
    scanf("%d", &barometro);

    printf("Entre com o numero do termometro (1-Subindo, 2-Estacionario e 3-Baixando): ");
    scanf("%d", &termometro);

    if (barometro == 1 && termometro == 1) {
        printf("Tempo bom, ventos quentes e secos\n");
    } else if (barometro == 2 && termometro == 2) {
        printf("Tempo incerto, ventos variáveis\n");
    } else if (barometro == 3 && termometro == 3) {
        printf("Chuvas abundantes e ventos de sul a sudeste\n");
    } else if (barometro == 1 && termometro == 2) {
        printf("Tempo bom, ventos de leste frescos\n");
    } else if (barometro == 1 && termometro == 3) {
        printf("Tempo bom, ventos de sul a sudeste\n");
    } else if (barometro == 2 && termometro == 1) {
        printf("Tempo mudando para bom, ventos de leste\n");
    } else if (barometro == 2 && termometro == 3) {
        printf("Chuva provável, ventos de sul a sudeste\n");
    } else if (barometro == 3 && termometro == 1) {
        printf("Tempo instável, aproximação de frente\n");
    } else if (barometro == 3 && termometro == 2) {
        printf("Frente quente com chuvas prováveis\n");
    }

    return 0;

}