#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c;
    float delta, x1, x2;

    printf("Fórmula de Bhaskara\n\n");

    printf("Entre com os coeficientes A, B e C: ");
    scanf("%f%f%f", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2*a);


    if (delta > 0) {
        printf("Duas raizes reais: %f  %f\n", x1, x2);
    } else{
        printf("Impossivel\n");
    }

    return 0;
}