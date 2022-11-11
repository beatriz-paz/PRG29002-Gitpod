#include <stdio.h>
#include <string.h>

void string_rep(char *src, int n, char *dst)
{
    int i;
    if (n == 0) {
     dst[0] = 0;
    } else {
        strcpy(dst, src);
        for (i = 0; i < n - 1; i++) {
            strcat(dst, src);
    }
    }
}

int main(void)
{
    char nome[10] = "Beatriz";
    char nome_rep[100];
    string_rep(nome, 2, nome_rep);
    printf("%s\n", nome_rep);

    return 0;
}