#include <stdio.h>

typedef struct {
    char nome[21];
    int idade;
} Pessoa;

void print_cadastro(int n, Pessoa *p);

int main(void)
{
    FILE *arq1, *arq2;
    Pessoa turma[10];
    int n_alunos;
    int i;

    arq1 = fopen("Aula19/teste.txt", "w");
    //arq = fopen("/bin/ab", "w"); - arquivo que não tem permição de escrita (nao abre)
    //checar se deu certo a abertura do arquivo
    if (arq1 == NULL) {
        printf("Não foi possível abrir o arquivo\n");
        return 1;
    }

    fprintf(arq1, "Beatriz\n");
    fprintf(arq1, "Estamos em %d\n", 2022);

    fclose(arq1);

    arq1 = fopen("teste.txt", "a");
    fprintf(arq1, "Aula 19 de Programação!\n");

    fclose(arq1);

    arq2 = fopen("Aula19/cadastro.txt", "r");
    if (arq2 == NULL) {
        printf("Não foi possível abrir o arquivo\n");
        return 1;
    }

    fscanf(arq2, "%d", &n_alunos);
    printf("A turma tem %d alunos\n", n_alunos);

    for (i = 0; i < n_alunos; i++) {
        fscanf(arq2, "%s", turma[i].nome);
        fscanf(arq2, "%d", &turma[i].idade);
    }

    fclose(arq2);

    print_cadastro(n_alunos, turma);

    return 0;
}

void print_cadastro(int n, Pessoa *p)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("Nome: %-20s  Idade: %3d\n", p[i].nome, p[i].idade);
    }
}