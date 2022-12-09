#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} Ponto;

int quadrante(Ponto p);
double distancia(Ponto p1, Ponto p2);
Ponto ponto_medio(Ponto p1, Ponto p2);
    
int main(void)
{
    Ponto p1, p2, pmed;
    printf("Entre com o ponto 1: ");
    scanf("%lg %lg", &p1.x, &p1.y);

    printf("Entre com o ponto 2: ");
    scanf("%lg %lg", &p2.x, &p2.y);

    printf("Quadrante do ponto 1: %d\n", quadrante(p1));
    printf("Quadrante do ponto 2: %d\n", quadrante(p2));
    printf("Distancia: %lg\n", distancia(p1, p2));

    pmed = ponto_medio(p1, p2);

    printf("Ponto medio: %lg %lg\n", pmed.x, pmed.y);

    return 0;
}

int quadrante(Ponto p)
{
    int quadrante;

    if (p.x > 0 && p.y > 0) {
        quadrante = 1;
    } else if (p.x > 0 && p.y < 0) {
        quadrante = 4;
    } else if (p.x < 0 && p.y > 0) {
        quadrante = 2;
    }else if (p.x < 0 && p.y < 0) {
        quadrante = 3;
    } else if ((p.y > 0 || p.y < 0) && p.x == 0) {
        quadrante = 0;
    } else if ((p.x > 0 || p.x < 0) && p.y == 0) {
        quadrante = 0;
    }

    return quadrante;
}

double distancia(Ponto p1, Ponto p2)
{
    double distancia_pontos;

    distancia_pontos = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    return distancia_pontos;
}

Ponto ponto_medio(Ponto p1, Ponto p2)
{
    Ponto ponto_med;

    ponto_med.x = (p1.x + p2.x) / 2.0;
    ponto_med.y = (p1.y + p2.y) / 2.0;

    return ponto_med;
}