#include <stdio.h>

int soma_divisores(int num);
int eh_perfeito(int num);

int main(void)
{
    int num, perfeito;

    printf("Entre com um inteiro positivo: ");
    scanf("%d", &num);

    perfeito = eh_perfeito(num);

    if (perfeito == 1) {
        printf("Numero perfeito: sim\n");
    } else {
        printf("Numero perfeito: nao\n");
    }

    return 0;
}

int soma_divisores(int num)
{
    int i, soma;
    soma = 0;
    for (i = 1; i < num; i++) {
        if ((num % i) == 0) {
            soma += i;
        }else {
            soma = soma;
        }
    }
    
    return soma;
}

int eh_perfeito(int num)
{
    int soma;
    soma = soma_divisores(num);
    if (soma == num) {
        return 1;
    } else {
        return 0;
    }
}