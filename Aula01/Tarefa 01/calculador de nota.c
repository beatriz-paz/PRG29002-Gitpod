#include <stdio.h>

int main(void)
{
    int n1;
    int n2;
    int n3;

    printf("Entre com o conceito 1 (E-10, P-8, S-6 e I-1): ");
    scanf("%d", &n1);

    printf("Entre com o conceito 2 (E-10, P-8, S-6 e I-1): ");
    scanf("%d", &n2);

    printf("Entre com o conceito 3 (E-10, P-8, S-6 e I-1): ");
    scanf("%d", &n3);

    if (n1 + n2 + n3 > 28) {
        printf("Conceito final: Excelente\n");
    } else if (n1 + n2 + n3 > 22) {
        printf("Conceito final: Proeficiente\n");
    } else if (n1 + n2 + n3 < 22) {
        printf("Conceito final: Suficiente\n");
    }

    return 0;
}