#include <stdio.h>

int main(void)
{
    int n, r;
    printf("Entre com um número inteiro positivo: ");
    scanf("%d", &n);

    printf("Número invertido: \n");
    while (n != 0) {  //loop infinito = 1
        r = n % 10;
        printf("%d", r);
        n = n / 10;
    }
    printf("\n");
    
    return 0;
}