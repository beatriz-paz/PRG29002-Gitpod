#include <stdio.h>

int main(void)
{
    int i, j;
    char str1[10] = "Ola ";
    char str2[10] = "Mundo!";
    char str3[20];

    i = 0;

    while (str1[i] != 0) {
        str3[i] = str1[i];
        i++;
    }

    j = i;
    i = 0;

    while (str2[i] != 0) {
        str3[j] = str2[i];
        i++;
        j++;
    }

    str3[j] = 0;

    printf("%s\n", str3);

    return 0;
}