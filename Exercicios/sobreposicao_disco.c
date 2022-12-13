#include <stdio.h>
#include <math.h>

typedef struct {
   double x, y; 
}Ponto;

typedef struct {
    Ponto centro;
    double raio;
} Disco;

double distancia(Ponto p1, Ponto p2);
int sobrepoem(Disco c1, Disco c2);

int main(void)
{
    Disco dis1, dis2;
    int sobrepoem_discos;

    printf("Entre com o centro do disco 1: ");
    scanf("%lg%lg", &dis1.centro.x, &dis1.centro.y);

    printf("Entre com o raio do disco 1: ");
    scanf("%lg", &dis1.raio);

    printf("Entre com o centro do disco 2: ");
    scanf("%lg%lg", &dis2.centro.x, &dis2.centro.y);

    printf("Entre com o raio do disco 2: ");
    scanf("%lg", &dis2.raio);

    sobrepoem_discos = sobrepoem(dis1, dis2);

    if (sobrepoem_discos == 1) {
        printf("Os discos se sobrepoem\n");
    } else{
        printf("Os discos nao se sobrepoem\n");
    }

    return 0;
}

double distancia(Ponto p1, Ponto p2)
{
    double distancia_centro;

    distancia_centro = sqrt((pow(p2.x - p1.x, 2.0)) + (pow(p2.y - p2.y, 2.0)));

    return distancia_centro;
}

int sobrepoem(Disco c1, Disco c2)
{
    double r;
    double sobrepoem;

    r = c1.raio + c2.raio;
    sobrepoem = distancia(c1.centro, c2.centro);

    if (sobrepoem < r) {
        return 0;
    } else {
        return 1;
    }

}