#include <stdio.h>
#include <string.h>
#define MAX_ITEM 1000

typedef struct {
    char descricao[21];
    double preco_kg;
    double peso_total;
} Item;

typedef struct {
    char nome_fantasia[41];
    Item estoque[MAX_ITEM];
    int n_items;
    double caixa;
} Feira;

double valor_total_item(Item item);
void adiciona_item(Feira *feira, Item item);
void imprime_feira(Feira *feira);
void vende_item(Feira *feira, int id, double kg);
double modifica_preco(Feira *feira, int id, double novo_preco);
double valor_total_estoque(Feira *feira, int id);

int main(void)
{
    Feira feira;

    strcpy(feira.nome_fantasia, "Feira do IFSC");
    feira.n_items = 0;
    feira.caixa = 100.0;

    Item pera = {"Pera nacional", 7.50, 100.0};
    Item banana = {"Banana caturra", 3.00, 200.0};
    Item uva = {"Uva Italia", 12.50, 50.0};

    adiciona_item(&feira, pera);
    adiciona_item(&feira, banana);
    adiciona_item(&feira, uva);

    printf("%lg",valor_total_item(banana));

    imprime_feira(&feira);

    printf("Vendemos 2kg de pera:\n\n");
    vende_item(&feira, 0, 2.0);

    imprime_feira(&feira);

    modifica_preco(&feira, 0, 9.99);

    imprime_feira(&feira);

    return 0;
}

double valor_total_item(Item item)
{
    return item.preco_kg * item.peso_total;
}

void adiciona_item(Feira *feira, Item item)
{
    (*feira).estoque[(*feira).n_items] = item;  //na posicao 0 do estoque será adicionado o item a assim por diante
    feira->n_items++;
}

void imprime_feira(Feira *feira)
{
    int i;
    printf("%s\n\n", feira->nome_fantasia);
    for (i = 0; i < feira->n_items; i++) {
        printf("%-25s %8.2lf %8.2lf\n", feira->estoque[i].descricao, feira->estoque[i].peso_total, feira->estoque[i].preco_kg);
    }
    printf("\n");
    printf("Caixa: R$ %.2lf\n", feira->caixa);
}

void vende_item(Feira *feira, int id, double kg)
{
    feira->estoque[id].peso_total -= kg;
    feira->caixa += kg * feira->estoque[id].preco_kg;
}

double modifica_preco(Feira *feira, int id, double novo_preco)
{
    return feira->estoque[id].preco_kg = novo_preco;
}

double valor_total_estoque(Feira *feira, int id)
{
    double valor = 0.0;

    for (id = 0; feira->estoque[id].preco_kg != 0 ; id++) {
        //valor += valor_total_item()
    }

    return valor;
}