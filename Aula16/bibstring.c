#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10] = "Ola ";
    char str2[10] = "Mundo!";
    char str3[20];

    strcat(str1, str2);  //concatenando

    strcpy(str3, str2); //copia o str2 para o str3

    printf("%s\n", str3);

    return 0;
}