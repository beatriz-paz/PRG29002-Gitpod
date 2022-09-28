#include <stdio.h>

int main(void)
{
    int i = 10;
    while (i >= 0) {
        printf("%d\n", i);
        i --;
    }

    printf("No final i é igual: %d\n", i);

    i = 1;
    while (i <= 2000) {
        i *= 2;
    }
    printf("Agora i vale %d\n", i);

    return 0;
}