#include <stdio.h>

int main(void)
{
    int num_dias_mes, primeiro_dia_semana, i;
    printf("Entre com o numero de dias do mes (28, 30 ou 31): ");
    scanf("%d", &num_dias_mes);
    printf("Entre com o primeiro dia da semana (1=Dom, 7=Sab): ");
    scanf("%d", &primeiro_dia_semana);

    for (i = 1; i <= num_dias_mes; i++) {
        if (i == 7) {
            printf("\n");
        } else {
            printf("%2d", i);
        }
    }
    
    return 0;
}