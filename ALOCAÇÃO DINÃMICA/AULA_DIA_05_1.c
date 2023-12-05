#include <stdio.h> //printf, scanf
#include <stdlib.h> //malloc, calloc, free, exit

int main(void){
    int tamanho = 5;
    int contador;
    int * vetor = (int *) malloc(tamanho*sizeof(int));
    if (vetor == NULL){
        exit(1); // aborta a execução do programa
    }
else{
    printf("alocação realizada com sucesso");
}
// ler os dados do vetor
printf("digite os valores do vetor\n");
for (contador=0; contador <tamanho; contador++){
    scanf("%d", &vetor[contador]); //ou scanf("%d", vetor+contador);
}
free(vetor);

return 0;
}