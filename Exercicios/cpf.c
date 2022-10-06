#include <stdio.h>

int cpf_primeiro_dv(int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9);
int cpf_segundo_dv(int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9);

int main(void)
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    printf("Entre com os 9 primeiros digitos do CPF: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9);

    d10 = cpf_primeiro_dv(d1, d2, d3, d4, d5, d6, d7, d8, d9);
    d11 = cpf_segundo_dv(d1, d2, d3, d4, d5, d6, d7, d8, d9);

    printf("CPF completo: %d%d%d.%d%d%d.%d%d%d-%d%d\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
    switch (d9) {
        case 1:
            printf("Unidades federativas: DF, GO, MT, MS, TO\n");
            break;
        case 2:
            printf("Unidades federativas: AC, AP, AM, PA, RO, RR\n");
            break;
        case 3:
            printf("Unidades federativas: CE, MA, PI\n");
            break;
        case 4:
            printf("Unidades federativas: AL, PB, PE, RN\n");
            break;
        case 5:
            printf("Unidades federativas: BA, SE\n");
            break;
        case 6:
            printf("Unidade federativa: MG\n");
            break;
        case 7:
            printf("Unidades federativas: ES, RJ\n");
            break;
        case 8:
            printf("Unidade federativa: SP\n");
            break;
        case 9:
            printf("Unidades federativas: PR, SC\n");
            break;
        case 0: printf("Unidade federativa: RS\n"); break;
    }

    return 0;
}

int cpf_primeiro_dv(int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9)
{
    int mult, d10;

    d1 = d1 * 10;
    d2 = d2 * 9;
    d3 = d3 * 8;
    d4 = d4 * 7;
    d5 = d5 * 6;
    d6 = d6 * 5;
    d7 = d7 * 4;
    d8 = d8 * 3;
    d9 = d9 * 2;

    mult = (d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8 + d9) * 10;

    d10 = mult % 11;

    if (d10 == 10) {
        d10 = 0;
    }

    return d10;
}

int cpf_segundo_dv(int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9)
{
    int mult, d11;

    mult = (11 * d1 + 10 * d2 + 9 * d3 + 8 * d4 + 7 * d5 + 6 * d6 + 5 * d7 + 4 * d8 + 3 * d9 + 2 * (cpf_primeiro_dv(d1, d2, d3, d4, d5, d6, d7, d8, d9))) * 10;

    d11 = mult % 11;

    if (d11 == 10) {
        d11 = 0;
    }

    return d11;
}