#include <stdio.h>
#include <stdlib.h>

int main() {
    int numQuestoes;
    
    printf("Digite o número de questões: ");
    scanf("%d", &numQuestoes);

    char *gabarito = (char *)malloc(numQuestoes * sizeof(char));
    char **respostasAlunos = (char **)malloc(10 * sizeof(char *));
    
    if (gabarito == NULL || respostasAlunos == NULL) {
        printf("Erro na alocação de memória.\n");
        exit(EXIT_FAILURE);
    }

    printf("Digite o gabarito da prova (ex: ABCDE...): ");
    scanf("%s", gabarito);

    for (int i = 0; i < 10; i++) {
        respostasAlunos[i] = (char *)malloc(numQuestoes * sizeof(char));
        printf("Digite as respostas do aluno %d (ex: ABCDE...): ", i + 1);
        scanf("%s", respostasAlunos[i]);
    }

    printf("\nNotas dos alunos:\n");
    int aprovados = 0;
    for (int i = 0; i < 10; i++) {
        int nota = 0;
        for (int j = 0; j < numQuestoes; j++) {
            if (respostasAlunos[i][j] == gabarito[j]) {
                nota += 10 / numQuestoes;
            }
        }

        printf("Aluno %d: %d\n", i + 1, nota);

        if (nota >= 6) {
            aprovados++;
        }
    }

    printf("\nPorcentagem de aprovação: %.2f%%\n", (aprovados / 10.0) * 100);

    free(gabarito);
    for (int i = 0; i < 10; i++) {
        free(respostasAlunos[i]);
    }
    free(respostasAlunos);

    return 0;
}
