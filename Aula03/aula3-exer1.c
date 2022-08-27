#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
    int calc1, calc2, cal3, cal4, cal5;

    printf("Calculo do ultimo digito do código EAN\n\n");
    
    printf("Entre com a primeira parte (1 digito): ");
    scanf("%d", &n1);

    printf("Entre com a segunda parte (6 digitos): ");
    scanf("%1d%1d%1d%1d%1d%1d", &n2, &n3, &n4, &n5, &n6, &n7);

    printf("Entre com a terceira parte, sem o digito verificador (5 digitos): ");
    scanf("%1d%1d%1d%1d%1d", &n8, &n9, &n10, &n11, &n12);

    calc1 = n1 + n3 + n5 + n7 + n9 + n11;
    calc2 = 

    printf("dig: %d", calc1);
    
    return 0;
}