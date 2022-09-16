#include <stdio.h>

int dias_mes(int mes);

int main(void)
{
    int mes, dias;

    printf("Entre com um mes (1 - 12); ");
    scanf("%d", &mes);

    dias = dias_mes(mes);
    if (dias < 0) {
        printf("Mes inválido");
    }else {
        printf("%d dias \n", dias);
    }

    return 0;
}

int dias_mes(int mes)
{
    switch (mes) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 2:
            return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return -1;
    }
}