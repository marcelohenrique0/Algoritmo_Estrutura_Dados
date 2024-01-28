#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 50
#define TAM_NOME 80

typedef struct {
    int matricula;
    char nome[80];
    char turma;
    float notas[3];
    float media;
} Aluno;

void inicializa_alunos(Aluno** alunos, int n) {
    for (int i = 0; i < n; i++) {
    alunos[i] = NULL;
}
}

void matricula(int n, Aluno** alunos) {
    for (int i = 0; i < n; i++) {
    if (alunos[i] == NULL) {
    alunos[i] = (Aluno*)malloc(sizeof(Aluno));

    printf("Digite a matrícula: ");
    scanf("%d", &(alunos[i]->matricula));

    printf("Digite o nome: ");
    canf("%s", alunos[i]->nome);

    printf("Digite a turma: ");
    scanf(" %c", &(alunos[i]->turma));

    return; }
}
    printf("Não há vagas disponíveis.\n");
}

void lanca_notas(int n, Aluno** alunos) {
    for (int i = 0; i < n; i++) {
    if (alunos[i] != NULL) {
    for (int j = 0; j < 3; j++) {
    printf("Digite a nota %d do aluno %d: ", j + 1, alunos[i]->matricula);
    scanf("%f", &(alunos[i]->notas[j]));
}

    alunos[i]->media = (alunos[i]->notas[0] + alunos[i]->notas[1] + alunos[i]->notas[2]) / 3.0;
}
}
}

void imprime_tudo(int n, Aluno** alunos) {
    for (int i = 0; i < n; i++) {
    if (alunos[i] != NULL) {
    printf("Matrícula: %d, Nome: %s, Turma: %c, Média: %.2f\n",
    alunos[i]->matricula, alunos[i]->nome, alunos[i]->turma, alunos[i]->media);
}
}
}

void imprime_turma(int n, Aluno** alunos, char turma) {
    for (int i = 0; i < n; i++) {
    if (alunos[i] != NULL && alunos[i]->turma == turma) {
    printf("Matrícula: %d, Nome: %s, Turma: %c, Média: %.2f\n",
    alunos[i]->matricula, alunos[i]->nome, alunos[i]->turma, alunos[i]->media);
}
}
}

void imprime_turma_aprovados(int n, Aluno** alunos, char turma) {
    for (int i = 0; i < n; i++) {
    if (alunos[i] != NULL && alunos[i]->turma == turma && alunos[i]->media >= 7.0) {
    printf("Matrícula: %d, Nome: %s, Turma: %c, Média: %.2f\n",
    alunos[i]->matricula, alunos[i]->nome, alunos[i]->turma, alunos[i]->media);
}
}
}

int main() {
    Aluno* alunos[MAX_ALUNOS];
    inicializa_alunos(alunos, MAX_ALUNOS);

    int opcao;
    char turma;

    do {
        printf("\nEscolha uma opção:\n");
        printf("1. Matricular aluno\n");
        printf("2. Lançar notas\n");
        printf("3. Imprimir dados de todos os alunos\n");
        printf("4. Imprimir dados de uma turma\n");
        printf("5. Imprimir aprovados de uma turma\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                matricula(MAX_ALUNOS, alunos);
                break;
            case 2:
                lanca_notas(MAX_ALUNOS, alunos);
                break;
            case 3:
                imprime_tudo(MAX_ALUNOS, alunos);
                break;
            case 4:
                printf("Digite a turma: ");
                scanf(" %c", &turma);
                imprime_turma(MAX_ALUNOS, alunos, turma);
                break;
            case 5:
                printf("Digite a turma: ");
                scanf(" %c", &turma);
                imprime_turma_aprovados(MAX_ALUNOS, alunos, turma);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
 }

} while (opcao != 0);

    for (int i = 0; i < MAX_ALUNOS; i++) {
    free(alunos[i]);
}

    return 0;
}