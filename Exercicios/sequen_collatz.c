#include <stdio.h>

int main(void)
{
    int num, i;

    printf("Entre com o termo inicial: ");
    scanf("%d", &num);

    while (num != 1) {
        if (num % 2 == 0) {
            num /= 2;
            printf("%2d, ", num);
        } else {
            num = (3 * num) + 1;
            printf("%2d, ", num);
        }
    }
    printf("\n");

    return 0;
}