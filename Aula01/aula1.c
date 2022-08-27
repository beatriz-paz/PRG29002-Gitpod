#include <stdio.h>

int main(void)
{
    int ano;
    double temp, valor;
    char letra;

    ano = 2022;
    temp = 9.3;

    printf("Bom dia!\n");
    printf("Estamos em %d e a temperatura é %lg graus.\n", ano, temp);

    valor = 3.14;
        
    printf("Com %%lg: %lg\n", valor);
    printf("Com %%lf: %lf\n", valor);
    printf("Com %%.4lf: %.4lf\n", valor);
    printf("Com %%le: %le\n", valor);
    printf("Com %%.2le: %.2le\n", valor);

    letra = 'R';

    printf("A letra é: %c\n", letra);

    printf("O ano é: %d.\n", ano);
    printf("Digite o novo ano:\n");
    scanf("%d", &ano);
    printf("O ano agora é: %d.\n", ano);

    printf("Digite um valor:\n");
    scanf("%lf", &valor);
    printf("O valor é %lg.\n", valor);

    return 0;

}