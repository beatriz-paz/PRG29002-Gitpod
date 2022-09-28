#include <stdio.h>

int potencia_fatorial(int base, int exp);
int coeficiente_binomial(int n, int k);
void imprimi_triangulo(int num_linha);

int main(void)
{
    int num_linha;
    printf("Entre com o número máximo de linha: ");
    scanf("%d", &num_linha);
    printf("\n");
    imprimi_triangulo(num_linha);
    return 0;
}

int potencia_fatorial(int base, int exp)
{
    int i, resultado = 1;

    for (i = 0; i < exp; i++) {
        resultado *= base;
        base--;
    }
    return resultado;
}

int coeficiente_binomial(int n, int k)
{
    return potencia_fatorial(n, k)/ potencia_fatorial(k, k);
}

void imprimi_triangulo(int num_linha)
{
    int n, k;
    for (n = 0; n <= num_linha; n++) {
        for (k= 0; k<= n; k++) {
            printf("%d ", coeficiente_binomial(n, k));
        }
        printf("\n");
    }
}