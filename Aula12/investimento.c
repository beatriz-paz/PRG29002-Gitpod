#include <stdio.h>

int calc_num_meses(double valor_i, double valor_f, double j, double a);

int main(void)
{
    double valor_inicial, valor_final, juros, aporte;
    int meses;
    printf("Entre com o valor inicial: ");
    scanf("%lf", &valor_inicial);
    printf("Entre com o valor final: ");
    scanf("%lf", &valor_final);
    printf("Entre com a taxa de juros (%%): ");
    scanf("%lf", &juros);
    juros /= 100.0;
    printf("Entre com o aporte mensal: ");
    scanf("%lf", &aporte);

    meses = calc_num_meses(valor_inicial, valor_final, juros, aporte);

    printf("Número de meses para alcancar o valor final: %d\n", meses);

    return 0;
}

int calc_num_meses(double valor_i, double valor_f, double j, double a)
{
    int mes = 0;
    double v = valor_i;

    while (v < valor_f) {
        v += v * j + a;
        mes ++;
    }

    return mes;
}