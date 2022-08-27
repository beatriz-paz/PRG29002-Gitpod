#include <stdio.h>

/*AULA 2 - PROG EM C*/
//Comenta em uma linha


int main(void)
{
    //criando uma paralelepípedo e calculando o volume
    double altura, largura, profundidade;
    double volume;
    int num_caixas;
    double preco_caixa;

    printf("Entre com a altura: ");
    scanf("%lf", &altura); //obrigatório colocar o %lg para saber o que sera digitado um double
    printf("Entre com a largura: ");
    scanf("%lf", &largura);
    printf("Entre com a profundidade: ");
    scanf("%lf", &profundidade);

    volume = altura * largura * profundidade;
    printf("Volume: %lg\n", volume);

    printf("Entre com o número de caixas: ");
    scanf("%d", &num_caixas);
    printf("Entre com o preço de uma caixa: ");
    scanf("%lf", &preco_caixa);
    printf("Valor total: R$ %.2lf\n", num_caixas * preco_caixa);

    return 0;
}