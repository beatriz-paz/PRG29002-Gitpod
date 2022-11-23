#include <stdio.h>
#include <string.h>
#define N_alunos 3

typedef struct {
    char nome[11];
    int idade;
} Pessoa;

typedef struct {
    char nome[11];
    Pessoa prof;
    Pessoa turma[N_alunos];
    int notas[N_alunos];

} Disciplina;

void imprime_pessoa(Pessoa p)
{
    printf("Nome: %s, idade: %d \n", p.nome, p.idade);
}

int main(void)
{
    int i;
    Disciplina prog1;
    Pessoa e = {"Eraldo", 35};

    prog1.prof.idade = 20;
    strcpy(prog1.prof.nome, "Roberto");
    strcpy(prog1.nome, "Prog 1");

    for (i = 0; i < N_alunos; i++) {
        printf("Entre com o nome do aluno %d: ", i);
        scanf("%s", prog1.turma[i].nome);
        printf("Entre com a idade do aluno %d: ", i);
        scanf("%d", &prog1.turma[i].idade);
    }

    printf("Professor: \n");
    imprime_pessoa(prog1.prof);

    printf("Alunos:\n");
    for (i = 0; i < N_alunos; i++) {
        imprime_pessoa(prog1.turma[i]);
        // imprime_pessoa ou -> printf("Nome: %s, idade: %d\n", turma[i].nome, turma[i].idade);
    }

    return 0;
}