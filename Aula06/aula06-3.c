#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *y;
    *y = *x;
    *x = temp;
}

int main(void)
{
    int x;
    int y;

    printf("Entre com o valo inteiro de X e Y: ");
    scanf("%d%d", &x, &y);
    printf("X vale %d e Y vale %d\n", x, y);

    swap(&x, &y);

    printf("Trocando o valor das variáveis de X e Y:\n");
    printf("X agora vale: %d\n", x);
    printf("Y agora vale: %d\n", y);

    return 0;
}