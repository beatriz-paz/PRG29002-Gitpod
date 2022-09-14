#include <stdio.h>
#include <math.h>

double calc_area_circulo(double area_circ);
double calc_area_anel(double raio_ext, double raio_int);
double calc_massa_arruela(double diametro_int, double diametro_ext, double espessura, double rho);

int main(void)
{
    double d_int, d_ext, espessura, densidade;
    int num_arruela;

    printf("Entre com o diametro interno (cm): ");
    scanf("%lf", &d_int);

    printf("Entre com o diametro externo (cm): ");
    scanf("%lf", &d_ext);

    printf("Entre com a espessura (cm): ");
    scanf("%lf", &espessura);

    printf("Entre com a densidade (g/cm^3): ");
    scanf("%lf", &densidade);

    printf("Entre com o numero de arruelas: ");
    scanf("%d", &num_arruela);

    printf("Massa total: %.2lf g\n", calc_massa_arruela(d_int, d_ext, espessura, densidade) * num_arruela);

    return 0;
}

double calc_area_circulo(double raio)
{
    double area_circ;
    area_circ = M_PI * (raio * raio);
    return area_circ;
}

double calc_area_anel(double raio_ext, double raio_int)
{
    double area_anel;
    area_anel = calc_area_circulo(raio_ext) - calc_area_circulo(raio_int);
    return area_anel;
}

double calc_massa_arruela(double d_int, double d_ext, double espessura, double rho)
{
    double massa, ext_raio, int_raio;
    int_raio = d_int / 2.0;
    ext_raio = d_ext / 2.0;
    massa = rho * (calc_area_anel(ext_raio, int_raio)) * espessura;
    return massa;
}
