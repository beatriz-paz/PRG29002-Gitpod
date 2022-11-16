#include <stdio.h>

int main(void)
{

int i, j;
    
int matriz[3][4] = {
    10, 20, 2, 5, 1, 0, 5, 6,
    8, 5, 6, 1};

for (i = 0; i < 3; i++) {
    for (j = 0; j < 4;j++) {
        printf("%8d", matriz[i][j]);
    }
    printf("\n");
}

    return 0;
}