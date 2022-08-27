#include <stdio.h>

#define DUZIA 12
#define PI 3.14159265359

int main(void)
{
    int grosa;  //grosa = uma dúzia de dúzias
    double ang_rad, ang_graus;

    grosa = DUZIA * DUZIA;
    printf("O valor de uma grosa é %d\n", grosa);

    printf("Digite o angulo em radiando: ");
    scanf("%lf", &ang_rad);

    ang_graus = ang_rad * (180.0 / PI);

    printf("O angulo em graus vale: %lg\n", ang_graus);
    
    return 0;
}