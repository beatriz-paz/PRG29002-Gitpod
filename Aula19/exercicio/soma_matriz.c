#include <stdio.h>

int main(void)
{
    FILE *matA, *matB, *matR;
    double matrizA[100][100], matrizB[100][100], matrizR[100][100];
    int i, j, lA, cA, lB, cB;

    // Abrindo arquivo para leitura das matrizes
    matA = fopen("Aula19/exercicio/matA.txt", "r");
    matB = fopen("Aula19/exercicio/matB.txt", "r");

    // Verificando se arquivo foi encontrado
    if (matA == NULL) {
        printf("Arquivo não encontrado!\n");
        return 1;
    }
    if (matB == NULL) {
        printf("Arquivo não encontrado!\n");
        return 1;
    }

    // Validado se é possível soma as matrizes
    fscanf(matA, "%d%d", &lA, &cA);
    fscanf(matB, "%d%d", &lB, &cB);
    if (lA != lB || cA != cB) {
        printf("Imposível somar matriz!\n");
        return 1;
    }

    // Preenchendo as matrizes A e B com os elementos dos arquivos 
    for (i = 0; i < lA; i++) {
        for (j = 0; j < cA; j++) {
            fscanf(matA, "%lg", &matrizA[i][j]);
        }
    
    }

    for (i = 0; i < lA; i++) {
        for (j = 0; j < cA; j++) {
            fscanf(matB, "%lg", &matrizB[i][j]);
        }
    }

    // Fechando os arquivos matA e matB
    fclose(matA);
    fclose(matB);

    // Abrindo arquivo para escrita da matriz resultante
    matR = fopen("Aula19/exercicio/matR.txt", "w");
    if (matR == NULL) {
        printf("Arquivo não encontrado!\n");
        return 1;
    }

    // Somando as matrizes;
    for (i = 0; i < lA; i++) {
        for (j = 0; j < cA; j++) {
            matrizR[i][j] = (matrizA[i][j] + matrizB[i][j]);
            fprintf(matR, " %lg", matrizR[i][j]);
        }
        fprintf(matR, "\n");
    }

    // Fechando arquivo de matriz resultante
    fclose(matR);

    return 0;
}

