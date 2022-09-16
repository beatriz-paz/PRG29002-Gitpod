#include <stdio.h>
#define UM 1

int main(void)
{
    int nota;
    printf("Entre com sua nota: ");
    scanf("%d", &nota);

    switch (nota) {
        case UM: // se nota for = 1, entra nessa case
            printf("Insuficiente\n");
            break;
        case 2:
            printf("Bom\n");
            break;
        case 3:
            printf("Muito bom\n");
            break;
        case 4:
            printf("Excelente\n");
            break;
        default:
            printf("Nota inválida\n");
    }
    return 0;
}