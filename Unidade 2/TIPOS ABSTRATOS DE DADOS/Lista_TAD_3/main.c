#include "ingresso.c"

int main(){
    int tamanho;

    printf("Qual o número de ingressos? ");
    scanf("%d", &tamanho);

    Ingresso *ingressos = (Ingresso*) malloc(sizeof(Ingresso) * tamanho);

    if(ingressos == NULL){
        printf("Erro na alocação!");
        exit(1);
    }
    
    preencher(ingressos, tamanho);
    imprimir_dados(ingressos, tamanho);
    novo_valor(ingressos, tamanho);
    preco_menor_maior(ingressos, tamanho);

    free(ingressos);

    return 0;
}