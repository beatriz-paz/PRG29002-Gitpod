#include <stdio.h>

int main(void)
{
    FILE *matA, *matB;
    double matrizA[5][5], matrizB[5][5];
    int i, j;

    matA = fopen("Aula19/exercicio/matA.txt", "r");
    if (matA == NULL) {
        printf("Arquivo não encontrado!\n");
        return 1;
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            fscanf(matA, "%lg", &matrizA[i][j]);
        }
    
    }
    

    matB = fopen("Aula19/exercicio/matA.txt", "r");

    return 0;
}

