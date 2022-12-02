#include <stdio.h>

int calcula_coefs(int n, int b, int *coefs);
void int_para_string(int n, int b, char *str);

int main(void)
{
    int coefs[100], n, b;
    char str[32];

    printf("Entre com um inteiro positivo: ");
    scanf("%d", &n);
    printf("Entre com a base (2 a 16): ");
    scanf("%d", &b);
    int_para_string(n, b, str);
    printf("Representacao %d-aria de %d: %s\n", b, n, str);

    return 0;
}

int calcula_coefs(int n, int b, int *coefs)
{
    int k = 0;
    while (n > 0) {
        coefs[k] = n % b;
        n /= b;
        k++;
    }

    return k;
}

void int_para_string(int n, int b, char *str)
{
    char digitos[] = "0123456789ABCDEF";
    int k, i, coefs[31];
    k = calcula_coefs(n, b, coefs);

    for (i = 0; i < k; i++) {
        str[i] = digitos[coefs[k - 1 - i]];
    }
    str[k] = '\0';
}