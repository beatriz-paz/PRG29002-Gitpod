#include <stdio.h>

int main(void)
{
    int n;
    printf("Entre com inteiros positivos. Entre com 0 ou um inteiro negativo para terminar.");
    scanf("%d", &n);

    while (n > 0) {
        printf("%d\n", n);
    }
    
    return 0;
}
