#include <stdio.h>

double calcula_comissao(double valor);

int main(void)
{
    double valor;

    printf("Entre com o valor negociado: ");
    scanf("%lf", &valor);

    printf("Taxa de corretagem: $%.2lf\n", calcula_comissao(valor));

    return 0;
}

double calcula_comissao(double valor)
{
    double taxa;

    if (valor < 2500) {
        taxa = 30 + 0.017 * valor;
        if (taxa < 39) {
            taxa = 39;
        }
    } else if (valor < 6250) {
        taxa = 56 + 0.0066*valor;
    }
    else if (valor < 20000){
        taxa = 76 + 0.0034 * valor;
    }
    else if (valor < 50000){
        taxa = 100 + 0.0022 * valor;
    }
    else if (valor < 500000){
        taxa = 155 + 0.0011 * valor;
    } else if (valor >= 500000 ) {
        taxa = 255 + 0.0009 * valor;
    }

    return taxa;
}