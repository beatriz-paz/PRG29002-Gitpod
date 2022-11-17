#include <stdio.h>

void string_rep(char *nome, int n, char *nome_rep);
int tamanho_string(char *nome_rep);

int main(void)
{
    char nome[10];
    char nome_rep[100];
    int n, tamanho;

    printf("Entre com uma palavra: ");
    scanf("%s", nome);
    printf("Entre com o numero de repeticoes: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Resultado: \"\"\n");
        printf("Tamanho: %d\n", 0);
    } else {
        string_rep(nome, n, nome_rep);
        printf("Resultado: \"%s\"\n", nome_rep);
        tamanho = tamanho_string(nome_rep);
        printf("Tamanho: %d\n", tamanho);
    }

    return 0;
}

void string_rep(char *nome, int n, char *nome_rep)
{
    int i, j, rep, ult_pos;
    i = 0;
    rep = 1;

    while (nome[i] != 0) {
        nome_rep[i] = nome[i];
        i++;
    }

    ult_pos = i - 1;
    j = i;
    i = 0;

    while (rep < n) {
        for (i = 0; i <= ult_pos; i++) {
            nome_rep[j] = nome[i];
            j++;
        }

        nome_rep[j] = 0;
        rep++;
    }
}

int tamanho_string(char *nome_rep)
{
    int i = 0;
    while (nome_rep[i] != 0) {
        i++;
    }
    return i;
}