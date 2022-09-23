#include <stdio.h>

int num_fatores(int n);
int eh_primo(int n);

int main(void)
{
    int num;
    printf("Entre com um inteiro: ");
    scanf("%d", &num);
    if (eh_primo(num)) {
        printf("É primo.\n");
    }else {
        printf("Não é primo.\n");
    }
    
    return 0;
}

int num_fatores(int n)
{
    int i;
    int nf = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            nf += 1;
        }
    }
    return nf;
}

int eh_primo(int n)//vai retornar em forma de booleano o valor (v = 1, f =0)
{
    return num_fatores(n) == 2;
}