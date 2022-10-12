#include <stdio.h>

int soma_divisores(int n);

int main(void)
{
    int a, b;

    printf("Entre com dois inteiros positivos: ");
    scanf("%d %d", &a, &b);

    printf("%d", soma_divisores(a));

    return 0;
}

int soma_divisores(int n)
{
    int i, num;
    num = 0;

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            num = n;
            printf("%d \n", num);
        }
    }
    printf("\n");

    return 0;
}