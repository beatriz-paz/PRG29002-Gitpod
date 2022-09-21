#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c;
    float delta, x1, x2, i1;

    printf("\nFórmula de Bhaskara\n\n");

    printf("Entre com os coeficientes A, B e C: ");
    scanf("%f%f%f", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raizes reais: %f, %f\n", x1, x2);

    if (delta == 0) {
        printf("Uma raiz real: %f ", ((-b + sqrt(delta)) / (2 * a)));

    } else if (delta < 0) {
        printf("Duas raizes imaginarias: +j%f -j%f", (-b + sqrt(-delta)) / (2 * a), (-b - sqrt(-delta)) / (2 * a));

    }else
        {
        printf("Duas raizes complexas:");
        }
    return 0;
    }
}