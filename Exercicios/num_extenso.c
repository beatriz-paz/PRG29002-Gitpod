#include <stdio.h>

void dezena_extenso(int dezena);
void unidade_extenso(int unidade);

int main(void)
{
    int num, dezena, unidade, num_atual;

    printf("Entre com um inteiro de 1 a 99: ");
    scanf("%d", &num);

    if (num < 1 || num > 99) {
        printf("Número invalido\n");
    } else if (num >=1 && num <=20) {
    switch (num) {
        case 1:
            printf("\"Um\"\n"); break;
        case 2:
            printf("\"Dois\"\n");break;
        case 3:
            printf("\"Três\"\n");break;
        case 4:
            printf("\"Quatro\"\n");break;
        case 5:
            printf("\"Cinco\"\n");break;
        case 6:
            printf("\"Seis\"\n");break;
        case 7:
            printf("\"Sete\"\n");break;
        case 8:
            printf("\"Oito\"\n");
            break;
        case 9:
            printf("\"Nove\"\n");
            break;
        case 10:
            printf("\"Dez\"\n");
            break;
        case 11:
            printf("\"Onze\"\n");
            break;
        case 12:
            printf("\"Doze\"\n");
            break;
        case 13:
            printf("\"Treze\"\n");
            break;
        case 14:
            printf("\"Quartoze\"\n");
            break;
        case 15:
            printf("\"Quinze\"\n");
            break;
        case 16:
            printf("\"Dezesseis\"\n");
            break;
        case 17:
            printf("\"Dezessete\"\n");
            break;
        case 18:
            printf("\"Dezoito\"\n");
            break;
        case 19:
            printf("\"Dezenove\"\n");
            break;
        case 20:
            printf("\"Vinte\"\n"); break;
    }
    } else {

    num_atual = num;
    dezena = num / 10;
    unidade = num_atual % 10;

    printf("\"");
    dezena_extenso(dezena);
    printf(" e ");
    unidade_extenso(unidade);
    printf("\"");
    printf("\n");

    }
    return 0;
}

void dezena_extenso(int dezena)
{
    switch (dezena) {
        case 2: printf("Vinte"); break;
        case 3: printf("Trinta"); break;
        case 4: printf("Quarenta"); break;
        case 5: printf("Cinquenta"); break;
        case 6: printf("Sessenta"); break;
        case 7: printf("Setenta"); break;
        case 8: printf("Oitenta"); break;
        case 9: printf("Noventa"); break;
    }
}

void unidade_extenso(int unidade)
{
    switch (unidade) {
        case 1:printf("Um");break;
        case 2:printf("Dois");break;
        case 3:printf("Três");break;
        case 4:printf("Quatro");break;
        case 5:printf("Cinco");break;
        case 6:printf("Seis");break;
        case 7:printf("Sete");break;
        case 8:printf("Oito");break;
        case 9:printf("Nove");break;
    }
}