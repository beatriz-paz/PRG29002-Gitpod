#include <stdio.h>

int main(void)
{
    int n, i;

    printf("Entre com um nº: ");
    scanf("%d", &n);

    printf("Contagem de 1 até nº:\n");

    for (i = 1; i <= n; i++) {//comando que conta de 1 até N
        printf("%d\n", i);
    }

    printf("Contagem de 0 até nº - 1:\n");

    for (i = 0; i < n; i++) {  //comando que conta de 0 até N
        printf("%d\n", i);
    }

    printf("Contagem regressiva de nº até 1:\n");

    for (i = n; i > 0; i--) {  //comando que conta de 0 até N
        printf("%d\n", i);
    }
    printf("Contagem nº - 1 até 0:\n");

    for (i = n - 1; i >= 0; i--) {  
        printf("%d\n", i);
    }
    printf("Contagem de 0 até n, de 3 em 3:\n");

    for (i = 0; i <= n; i+= 3) {
        printf("%d\n", i);
    }

    return 0;
}