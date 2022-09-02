#include <stdio.h>
#include <math.h>

double media(double a, double b)//FUNÇÃO DE CALCULAR MÉDIA DEFINIDA
{
    double m;
    m = (a + b) / 2;

    return m;
}

int main(void)
{
    double num1, num2;
    printf("Entre com dois números: ");
    scanf("%lf%lf", &num1, &num2);
    //med = media(num1, num2);  //CHAMANDO A FUNÇÃO MEDIA, E COLOCANDO OS ARGUMENTOS
    //printf("A média é: %lg \n", med);

    printf("A média é: %lg \n", media(num1, num2));
    printf("A metade da média é: %lg \n", media(num1, num2) / 2);
    printf("A média entre PI e E é: %lg\n", media(M_PI, M_E));

    return 0;
}