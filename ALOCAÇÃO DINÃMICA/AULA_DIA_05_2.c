#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho = 5, novo_tamanho;
    int *vetor = (int *) malloc(tamanho * sizeof(int));
    printf("\nEntre com o novo tamanho do vetor: ");
    scanf("%d", &novo_tamanho);
    vetor = (int *) realloc(vetor, novo_tamanho * sizeof(int));
    if (vetor == NULL){
        printf("erro ao alocar memoria");
        exit(1);
    }
    free(vetor);
    return 0;
}