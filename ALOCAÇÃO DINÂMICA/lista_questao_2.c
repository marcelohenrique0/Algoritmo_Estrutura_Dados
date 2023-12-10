#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroquestoes;
    
    printf("Digite o número de questões: ");
    scanf("%d", &numeroquestoes);

    char *gabarito = (char *)malloc(numeroquestoes * sizeof(char));
    char **respostas = (char **)malloc(10 * sizeof(char *));

    printf("Digite o gabarito da prova (ex: ABCDE...): ");
    scanf("%s", gabarito);

    for (int i = 0; i < 10; i++) {
        respostas[i] = (char *)malloc(numeroquestoes * sizeof(char));
        printf("Digite as respostas do aluno %d (ex: ABCDE): ", i + 1);
        scanf("%s", respostas[i]);
    }

    printf("\nNotas dos alunos:\n");
    int aprovados = 0;
    for (int i = 0; i < 10; i++) {
        int nota = 0;
        for (int j = 0; j < numeroquestoes; j++) {
            if (respostas[i][j] == gabarito[j]) {
                nota += 10 / numeroquestoes;
            }
        }

        printf("Aluno %d: %d\n", i + 1, nota);

        if (nota >= 6) {
            aprovados++;
        }
    }

    printf("\nPorcentagem de aprovados: %.2f%%\n", (aprovados / 10.0) * 100);

    free(gabarito);
    for (int i = 0; i < 10; i++) {
        free(respostas[i]);
    }
    free(respostas);

    return 0;
}
