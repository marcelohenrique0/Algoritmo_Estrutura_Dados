#include <stdio.h>
#include <stdlib.h>

int main(void){
    int vetor[10];
    int i = 0;
    int maior, menor;
    float media = 0;
    FILE *entrada_q2, *saida_q2;

    entrada_q2 = fopen("entrada_q2.txt","r");
    saida_q2 = fopen("saida_q2.txt","w");

    if (entrada_q2 == NULL || saida_q2 == NULL) {
        printf("Erro ao abrir o arquivo");
        exit(1);
    } else {
        printf("Arquivos abertos com sucesso\n");
    }

    while(fscanf(entrada_q2,"%d\n",&vetor[i]) != EOF){
        media += vetor[i];
        i++;
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    fprintf(saida_q2, "Menor elemento: %d\nMaior elemento: %d\nMedia dos elementos: %.2f", menor, maior, media / i);

    fclose(entrada_q2);
    fclose(saida_q2);
    
    return 0;
}