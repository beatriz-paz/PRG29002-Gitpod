#include <stdio.h>

//Expressões lógicas

int main(void)
{
    // Relacionais
    int a, b, c, d, e, f;

    a = 10;
    b = 20;
    c = a < b;
    d = a >= b;
    e = a == b;
    f = a != b;

    printf("%d %d %d %d\n", c, d, e, f);

    //Booleanos
    int p, q;
    printf("Entre com os valores de P e Q: ");
    scanf("%d%d", &p, &q);

    printf("p E q: %d\n", p && q);
    printf("p OU q: %d\n", p || q);
    printf("NÃO p: %d\n", !p);
    printf("NÃO q: %d\n", !q);

    return 0;
}