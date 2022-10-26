#include <stdio.h>
#include "vetor.h" //criando um arquivo cabeçalho próprio

int main(void)
{
    double v[3] = {2, 5, 6};
    double w[3] = {1, 1, 1};
    double *s; // PONTEIRO 
    double p, min, max;

    imprime_vetor(v, 3);
    p = produto_interno(v, w, 3);
    printf("Produto intero: %lg\n", p);

    s = soma_vetores(v, w, 3);
    printf("Vetor soma: ");
    imprime_vetor(s, 3);

    minmax(v, 3, &min, &max);
    printf("Mínimo: %lg\n", min);
    printf("Máximo: %lg\n", max);

    return 0;
}