#include <stdio.h>

void imprimi_calendario(int primeiro_dia_semana, int num_dias_mes);

int main(void)
{
    int num_dias_mes, primeiro_dia_semana;
    printf("Entre com o numero de dias do mes (28, 30 ou 31): ");
    scanf("%d", &num_dias_mes);
    printf("Entre com o primeiro dia da semana (1=Dom, 7=Sab): ");
    scanf("%d", &primeiro_dia_semana);
    printf("\n");
    imprimi_calendario(primeiro_dia_semana, num_dias_mes);
    printf("\n");
    
    return 0;
}

void imprimi_calendario(int primeiro_dia_semana, int num_dias_mes)
{
    int i;
    switch (primeiro_dia_semana) {
        case 1:
            for (i = 1; i <= num_dias_mes; i++) {
                if (i == 7 || i == 14 || i == 21 || i == 28) {
                    printf("%2d\n",i);
                }else {
                    printf("%2d ", i);
                }
            }
            break;
        case 2:
            printf("   ");
            for (i = 1; i <= num_dias_mes; i++) {
                if (i == 6 || i == 13 || i == 20 || i == 27) {
                    printf("%2d\n", i);
                } else {
                    printf("%2d ", i);
                }
            }
            break;
        case 3:
            printf("     ");
            for (i = 1; i <= num_dias_mes; i++) {
                if (i == 5 || i == 12 || i == 19 || i == 26) {
                    printf("%2d\n", i);
                } else {
                    printf("%2d ", i);
                }
            }
            break;
        case 4:
            printf("     ");
            for (i = 1; i <= num_dias_mes; i++) {
                if (i == 4 || i == 11 || i == 18 || i == 25) {
                    printf("%2d\n", i);
                } else {
                    printf("%2d ", i);
                }
            }
            break;
        case 5:
            printf("      ");
            for (i = 1; i <= num_dias_mes; i++) {
                if (i == 3 || i == 10 || i == 17 || i == 24) {
                    printf("%2d\n", i);
                } else {
                    printf("%2d ", i);
                }
            }
            break;
        case 6:
            printf("       ");
            for (i = 1; i <= num_dias_mes; i++) {
                if (i == 2 || i == 9 || i == 16 || i == 23 || i == 30) {
                    printf("%2d\n", i);
                } else {
                    printf("%2d ", i);
                }
            }
            break;
        case 7:
            printf("        ");
            for (i = 1; i <= num_dias_mes; i++) {
                if (i == 1 || i == 8 || i == 15 || i == 22 || i == 29) {
                    printf("%2d\n", i);
                } else {
                    printf("%2d ", i);
                }
            }
    }
}