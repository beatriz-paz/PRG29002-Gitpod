#include <stdio.h>

int main(void)
{
    int valor, valor_lido, soma, maior_num;

    soma = 1;

    printf("Entre com inteiros positivos. Entre com 0 ou um inteiro negativo para terminar.\n> ");
    scanf("%d", &valor);

    maior_num = valor;

    while (valor > 0) {
        printf("> ");
        scanf("%d", &valor_lido);
        if (valor_lido == 0 || valor_lido < 0) {
            break;
        }
        if (valor == valor_lido) {
            soma += 1;
        } else if (valor_lido > valor) {
            maior_num = valor_lido;
            soma = 1;
            valor = maior_num;
        } else if (valor_lido < valor) {
            maior_num = valor;
        }
    }

    if (soma == 1) {
        printf("O maior inteiro foi %d, que ocorreu apenas uma vez.\n", maior_num);
    } else {
        printf("O maior inteiro foi %d, que ocorreu %d vezes.\n", maior_num, soma);
    }

    return 0;
}