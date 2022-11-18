#include <stdio.h>

int main(void)
{
    //char nome[10] = {'R', 'o', 'b', '\0'};
    char nome[10] = "Rob";

    //nome[0] = 'B';
    //nome[1]++;
    //nome[2] = 97; //97 == a
    nome[0] = ' ';

    printf("%s\n", nome);

    return 0;
}