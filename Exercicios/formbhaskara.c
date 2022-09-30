#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c;
    float delta, x1, x2;

    printf("\nFórmula de Bhaskara\n\n");

    printf("Entre com os coeficientes: ");
    scanf("%f%f%f", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raizes reais: %f, %f\n", x1, x2);
    }
    else if (delta == 0) {
        printf("Uma raiz real: %f \n", ((-b + sqrt(delta)) / (2 * a)));

    }else if (delta < 0 && b == 0) {
        delta = -delta;
        printf("Duas raizes imaginarias: +j%f -j%f\n", (-b - sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    } else{
        delta = -delta;
        printf("Duas raizes complexas: -%g + j%g, -%g - j%g\n", b / (2*a), sqrt(delta) / (2*a), b / (2*a), sqrt(delta) / (2*a));

    }

    return 0;
}