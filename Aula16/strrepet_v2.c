#include <stdio.h>

void string_rep(char *nome, int n, char *nome_rep);

int main(void)
{
    char nome[10];
    char nome_rep[100];
    int n;

    printf("Entre com uma palavra: ");
    scanf("%s", nome);
    printf("Entre com o número de repetições: ");
    scanf("%d", &n);

    string_rep(nome, n, nome_rep);
    printf("%s\n", nome_rep);

    return 0;
}

void string_rep(char *nome, int n, char *nome_rep)
{
    int i = 0, j, rep = 1, ult_pos;
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
