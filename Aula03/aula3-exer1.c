#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
    int soma1, soma2, calc1, subt1, calc2, digito;

    printf("\nCálculo do último dígito do código EAN\n\n");

    printf("Entre com a primeira parte (1 digito): ");
    scanf("%d", &n1);

    printf("Entre com a segunda parte (6 digitos): ");
    scanf("%1d%1d%1d%1d%1d%1d", &n2, &n3, &n4, &n5, &n6, &n7);

    printf("Entre com a terceira parte, sem o digito verificador (5 digitos): ");
    scanf("%1d%1d%1d%1d%1d", &n8, &n9, &n10, &n11, &n12);

    soma1 = n1 + n3 + n5 + n7 + n9 + n11;
    soma2 = n2 + n4 + n6 + n8 + n10 + n12;
    calc1 = (soma2 * 3) + soma1;
    subt1 = calc1 - 1;
    calc2 = subt1 % 10;  // % - divide e estrai o resto da divisão como resultado
    digito = 9 - calc2;

    printf("Digito verificador: %d\n", digito);

    return 0;
}