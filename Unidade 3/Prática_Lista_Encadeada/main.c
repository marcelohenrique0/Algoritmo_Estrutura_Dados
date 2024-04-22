#include "lista.c"

int main(void){
    // Criando uma lista encadeada
    Lista *lista_encadeada = cria_lista();

    // Inserindo elementos na lista
    lista_encadeada = insere_elemento(lista_encadeada, 3);
    lista_encadeada = insere_elemento(lista_encadeada, 2);
    lista_encadeada = insere_elemento(lista_encadeada, 1);
    lista_encadeada = insere_elemento(lista_encadeada, 0);

    // Imprimindo a lista
    printf("Lista: ");
    imprimir_lista(lista_encadeada);
    printf("\n");

    // Verificando se a lista está vazia
    if (lista_vazia(lista_encadeada)) {
        printf("A lista está vazia.\n");
    } else {
        printf("A lista não está vazia.\n");
    }

    // Buscando elementos na lista
    // Elemento está na lista
    busca_elemento_lista(lista_encadeada, 3);
    // Elemento não está na lista
    busca_elemento_lista(lista_encadeada, 4);

    // Retirando um elemento da lista
    lista_encadeada = retirar_elemento(lista_encadeada, 2);

    // Imprimindo a lista após a retirada
    printf("Lista após retirar o elemento 2: ");
    imprimir_lista(lista_encadeada);
    printf("\n");

    // Liberando a lista
    liberar_lista(lista_encadeada);

    return 0;
}