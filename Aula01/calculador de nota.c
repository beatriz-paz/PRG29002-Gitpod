#include <stdio.h>

int main(){

    int excelente = 0, proficiente = 0, suficiente = 0, insuficiente = 0;
    char conceito;


    printf("Entre com os conceitos (E-excelente, P-proficiente, S-suficiente) e I-insuficiente: \n");

    for (int i = 0; i < 3; i++) {
        scanf(" %c", &conceito);
        switch(conceito) {
            case 'E':
                excelente++;
                break;
            case 'P':
                proficiente++;
                break;
            case 'S':
                suficiente++;
                break;
            case 'I':
                insuficiente++;
                break;
            default:
                printf("Conceito inválido! Use E, P, S ou I.\n");
                i--; // decrementa o índice para ler o conceito novamente
        }
    }

    if (excelente >= (3/2) && insuficiente == 0) {
        printf("Nota resultante: Excelente\n");
    } else if (proficiente >= (3/2) && insuficiente == 0) {
        printf("Nota resultante: Proficiente\n");
    } else if (insuficiente == 0) {
        printf("Nota resultante: Suficiente\n");
    } else {
        printf("Nota resultante: Insuficiente\n");
    }

    return 0;
}
