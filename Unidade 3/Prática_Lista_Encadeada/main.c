#include "lista.c"

int main(void){
    //Criando uma lista encadeada
    Lista *lista_encadeada = cria_lista();
    //Inserindi o valor 3 na lista
    lista_encadeada = insere_elemento(lista_encadeada, 3);
    lista_encadeada = insere_elemento(lista_encadeada, 2);
    lista_encadeada = insere_elemento(lista_encadeada, 1);
    lista_encadeada = insere_elemento(lista_encadeada, 0);

    //Imprimindo a lista
    imprimir_lista(lista_encadeada);

    //Verificando se a lista está vazia
    lista_vazio(lista_encadeada);

    //Buscando um elemento na lista

    // elemento está na lista
    busca_elemento_lista(lista_encadeada, 3);
    // elemento não está na lista
    busca_elemento_lista(lista_encadeada, 4);

    return 0;
}