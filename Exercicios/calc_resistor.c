#include <stdio.h>

int main(void)
{
    int num_resistores, i;
    double serie, paralelo, valor_lido;

    printf("Entre com a quantidade de resistencias: ");
    scanf("%d", &num_resistores);

    serie = 0;
    paralelo = 0;

    for (i = 1; i <= num_resistores; i++) {
        printf("Entre com a resistencia %d (ohm): ", i);
        scanf("%lf", &valor_lido);
        serie = serie + valor_lido;
        paralelo = (paralelo + (1 / valor_lido));
    }

    paralelo = 1 / paralelo;

    printf("Resistencia serie: %lg ohm\n", serie);
    printf("Resistencia paralelo: %lg ohm\n", paralelo);

    return 0;
}
