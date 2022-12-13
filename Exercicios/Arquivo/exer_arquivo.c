#include <stdio.h>

// Escreva um programa que leia do usuário o nome de um arquivo texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.

int main(void)
{
    char arquivo[20];
    FILE *arq;

    arq = fopen("Exercicios/Arquivo/exer_arquivo.txt", "r");
    if (arq == NULL) {
        printf("Não foi possível abrir o arquivo\n");
        return 1;
    }

    fprintf(arq, "TESTE");

    return 0;
}