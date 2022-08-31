/*Entrar com a idade: 20

// deve votar entre 18 até 70
// pode votar 16 ...

Imprimir:
- Pode votar: 1
- Deve votar: 1 
- Tem preferencial: 0*/

#include <stdio.h>

int main(void)
{
    int idade, pvotar, dvotar, tpref;

    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    pvotar = idade >= 16;
    dvotar = idade >= 18 && idade <= 70;
    tpref = idade >= 65;

    printf("Pode votar: %d\n", pvotar);
    printf("Deve votar: %d\n", dvotar);
    printf("Tem preferencial: %d\n", tpref);

    return 0;
}