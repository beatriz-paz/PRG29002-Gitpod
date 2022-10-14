#include <stdio.h>

#define SENHA 314159

int main(void)
{
    int tentativas;
    double valor_lido;

    printf("Entre com a senha:  ");
    scanf("%lg", &valor_lido);

    tentativas = 1;

    while (tentativas < 3) {
        if (SENHA == valor_lido) {
            printf("Acesso autorizado\n");
            break;
        } else {
            printf("Acesso negado (senha incorreta)\n");
            printf("Entre com a senha: ");
            scanf("%lg", &valor_lido);
            tentativas++;
        }
    }
    if (tentativas >= 3 && valor_lido != SENHA) {
        printf("Acesso negado (senha incorreta)\n");
        printf("Sistema bloqueado\n");
    }

    return 0;
}
