#include <stdio.h>
#include <stdlib.h>

int main() {
    int entrevistados;

    printf("Digite o numero de N: ");
    scanf("%d", &entrevistados);

    int *sexo = (int *)malloc(entrevistados * sizeof(int));
    int *opiniao = (int *)malloc(entrevistados * sizeof(int));

    for (int i = 0; i < entrevistados; i++) {
        printf("O entrevistado é Masculino ou Feminino? (M: 1/F: 2): ");
        scanf(" %d", &sexo[i]);

        printf("Informe a opiniao sobre o produto (gostou : 1/não gostou: 2): ");
        scanf(" %d", &opiniao[i]);
    }

    int mulheres_gostaram = 0;
for (int i = 0; i < entrevistados; i++) {
    if (sexo[i] == 2 && opiniao[i] == 1) {
        mulheres_gostaram++;
    }
}
float porcentagem_mulheres = (float)mulheres_gostaram / entrevistados * 100;

int homens_nao_gostaram = 0;
for (int i = 0; i < entrevistados; i++) {
    if (sexo[i] == 1 && opiniao[i] == 2) {
        homens_nao_gostaram++;
    }
}
float porcentagem_homens = (float)homens_nao_gostaram / entrevistados * 100;

    printf("\nPorcentagem de mulheres que gostaram do produto: %.2f%%\n", porcentagem_mulheres);
    printf("Porcentagem de homens que nao gostaram do produto: %.2f%%\n", porcentagem_homens);

    free(sexo);
    free(opiniao);

    return 0;
}
