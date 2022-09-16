#include <stdio.h>

void dias_mes(int mes);

int main(void)
{
    int mes;

    printf("Entre com um mes (1 - 12): ");
    scanf("%d", &mes);

    dias_mes(mes);

    return 0;
}

void dias_mes(int mes)
{
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 dias\n");
            break;
        case 2:
            printf("28 dias\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 dias\n");
            break;
        default:
            printf("Mes inválido\n");
    }
}