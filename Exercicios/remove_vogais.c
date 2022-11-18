#include <stdio.h>

int remove_vogais(char *str);

int main(void)
{
    int n, k;
    char palavra[11];
    char palavra_semvogal[11];
    printf("Entre com uma palavra: ");
    scanf("%s", palavra);

    n = remove_vogais(palavra);

    for (k = 0; palavra[k] != '\0'; k++) {
        if (palavra[k] == ' ') {
            palavra_semvogal[k] = palavra[k + 1];
        } else {
            palavra_semvogal[k] = palavra[k + 1];
        }
    }

    printf("Palavra sem vogais: %s\n", palavra);
    printf("Numero de vogais removidas: %d\n", n);

    return 0;
}

int remove_vogais(char *str)
{
    int n = 0, i, j, k;
    char vogais[11] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char string[11];

    for (i = 0; i < 11; i++) {
        string[i] = str[i];
    }
    
    for (i = 0; i < str[i] != 0; i++) {
        for (j = 0; vogais[j] != 0 ; j++) {
            if (str[i] == vogais[j]) {
                str[i] = ' ';
                /*for (k = 0; string[k] != 0; k++) {
                    string[k] = str[k + 1];
                }*/
                n++;
              break;  
            }
        }
    }

    return n;
}