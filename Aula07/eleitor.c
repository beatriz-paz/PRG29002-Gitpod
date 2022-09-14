#include <stdio.h>

int main(void)
{
    int idade;

    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16) {
        printf("Você tem o direito de votar! ");
        if (idade >=18 && idade <=70) {
            printf("E o seu voto é obrigatório! \n");
        }else {
            printf("E seu voto é facultativo\n");
        }
    }else {
        printf("Você ainda não pode votar!\n");
    }

    return 0;
}