// Biblioteca de vetores
#include "vetor.h"
#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(double *v, int n)
{
    int i;
    printf("[");
    for (i = 0; i < n - 1; i++) {
        printf("%lg, ", v[i]);
    }
    printf("%lg]\n", v[n -1]);
}

double produto_interno(double *a, double *b, int n)
{
    double soma = 0.0;
    int i;

    for (i = 0; i < n; i++) {
        soma += a[i] * b[i];
    }

    return soma;
}

void minmax(double *v, int n, double *min, double *max)
{
    int i;
    *max = v[0];
    *min = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

double *soma_vetores(double *a, double *b, int n)
{
    double *s;
    int i;
    s = malloc(sizeof(double) * n);
    // s é a criação de um VETOR com tamanho variável (ALOCAÇÃO DINAMICA DE MEMÓRIA)
    //função malloc está na biblioteca stdlib, e vai resevar o valor na memória em baytes
    //sizeof = 8

    for (i = 0; i < n; i++) {
        s[i] = a[i] + b[i];
    }

    return s;
}