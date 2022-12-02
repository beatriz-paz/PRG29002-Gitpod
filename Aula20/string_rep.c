#include <stdio.h>

int string_rep(char *src, int n, char *dst);

int main(void)
{
    char src[11], dst[101];
    int n, rep;

    printf("Entre com uma palavra: ");
    scanf("%s", src);
    printf("Entre com o numero de repeticoes: ");
    scanf("%d", &n);

    rep = string_rep(src, n, dst);

    printf("Resultado: \"%s\"\n", dst);
    printf("Tamanho: %d\n", rep);

    return 0;
}

int string_rep(char *src, int n, char *dst)
{
    int i = 0, j, k;

    for (j = 0; j < n; j++) {
        for (k = 0; src[k] != '\0'; k++) {
            dst[i] = src[k];
            i++;
        }
    }
    dst[i] = '\0';

    return i;
}