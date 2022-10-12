#include <stdio.h>

int soma_divisores(int n);
int sao_amigos(int a, int b);

int main(void)
{
    int a, b, amigos;

    printf("Entre com dois inteiros positivos: ");
    scanf("%d %d", &a, &b);

    amigos = sao_amigos(a, b);

    if (amigos == 1) {
        printf("Os numeros %d e %d sao amigos\n", a, b);
    } else {
        printf("Os numeros %d e %d nao sao amigos\n", a, b);
    }

    return 0;
}

int soma_divisores(int n)
{
    int i, num;
    num = 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            num += i;
        }
    }
    return num;
}

int sao_amigos(int a, int b)
{
    int amigos, num_a, num_b;

    num_a = soma_divisores(a);
    num_b = soma_divisores(b);

    amigos = (num_a == b) && (num_b == a);

    return amigos;
}