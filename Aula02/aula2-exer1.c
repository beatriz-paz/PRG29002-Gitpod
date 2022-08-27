#include <stdio.h>

#define VALOR_CONVER 32

int main(void)
{
    double temp_farenh, temp_cels;

    printf("Entre com a temperatura em farenheits: ");
    scanf("%lf", &temp_farenh);

    temp_cels = (temp_farenh - VALOR_CONVER) * (5.0 / 9);
    printf("A temperatura em graus celsius é: %lg\n", temp_cels);

    printf("Entre com a temperatura em farenheits: ");
    scanf("%lf", &temp_farenh);

    temp_cels = (temp_farenh - VALOR_CONVER) * (5.0 / 9);
    printf("A temperatura em graus celsius é: %lg\n", temp_cels);

    printf("Entre com a temperatura em farenheits: ");
    scanf("%lf", &temp_farenh);

    temp_cels = (temp_farenh - VALOR_CONVER) * (5.0 / 9);
    printf("A temperatura em graus celsius é: %lg\n", temp_cels);

    return 0;
    
    
}