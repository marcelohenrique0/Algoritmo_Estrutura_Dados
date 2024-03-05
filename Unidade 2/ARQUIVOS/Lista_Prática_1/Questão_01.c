#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *saida_q1, *entrada_q1;
    float nota1, nota2, nota3, media;
    char nome[20];
    
    entrada_q1 = fopen("entrada_q1.txt", "r");
    saida_q1 = fopen("saida_q1.txt", "w");

    if (entrada_q1 == NULL || saida_q1 == NULL) {
        printf("Erro ao abrir o arquivo");
        exit(1);
    } else {
        printf("Arquivos abertos com sucesso\n");
    }

    while (fscanf(entrada_q1, "%19[^\t]%*[\t]%f%f%f", nome, &nota1, &nota2, &nota3) != EOF) {
        media = (nota1 + nota2 + nota3) / 3;

        printf("Nome: %s, Nota 1: %.1f, Nota 2: %.1f, Nota 3: %.1f, Média: %.1f\n", nome, nota1, nota2, nota3, media); 
        fprintf(saida_q1, "%s\t%.1f\t%s\n", nome, media, (media >= 7.0) ? "aprovado" : "reprovado");
    }

    fclose(entrada_q1);
    fclose(saida_q1);

    return 0;
}