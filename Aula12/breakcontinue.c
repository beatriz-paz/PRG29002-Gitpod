#include <stdio.h>

int main(void)
{
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    printf("Comando Break\n");

    for (i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        printf("%d\n", i);
    }

    printf("Comando continue\n");

    for (i = 0; i < 10; i++) {
        if (i == 5) {
            continue; // pula o número 5, e fica imprimindo então for verdade o for
        }
        printf("%d\n", i);
    }

    return 0;
}