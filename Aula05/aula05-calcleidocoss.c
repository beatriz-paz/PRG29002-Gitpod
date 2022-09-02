#include <stdio.h>
#include <math.h>

double lei_dos_cossenos(double a, double b, double gama)  //Função, lei dos cossenos, recebe 2 lados e o angulo e retorna o tamanho do lado faltante
{
    return sqrt((a * a) + pow(b, 2) - (2 * a * b * cos(gama)));
}

int main(void)
{
    double a, b, c, gama;

    printf("Entre com 2 lados: ");
    scanf("%lf%lf", &a, &b);
    printf("Entre com o ângulo entre os 2 lados: ");
    scanf("%lf", &gama);

    c = lei_dos_cossenos(a, b, gama);
    
    printf("O terceiro lado vale: %lg\n", c);

    return 0;
}