#include <stdio.h>

int main(void)
{
    int i;

    // WHILE

    i = 0;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
    printf("\n");

    // DO - WHILE
    i = 0;
    do {
        printf("%d\n", i);
        i--;
    } while (i > 0);

    return 0;
}