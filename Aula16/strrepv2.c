#include <stdio.h>

void string_rep(char *nome, int n, char *nome_rep);

int main(void)
{
    char nome[10] = "Bea";
    char nome_rep[100];
    string_rep(nome, 3, nome_rep);
    printf("%s\n", nome_rep);

    return 0;
}

void string_rep(char *nome, int n, char *nome_rep)
{
    int i, j, rep;
    i = 0;

    while (nome[i] != 0) {
        nome_rep[i] = nome[i];
        i++;
    }

    j = i;
    i = 0;

    while (rep < n) {
        for (i = 0; i < j - i; i++) {
            nome_rep[j] = nome[i];
            j++;
        }

        nome_rep[j] = 0;
    }
    

}
