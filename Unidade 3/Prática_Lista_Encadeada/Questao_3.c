#include "lista.c"
#include <time.h>

// Função para concatenar duas listas encadeadas
Lista *concatena(Lista *l1, Lista *l2) {
    // Se a primeira lista estiver vazia, retorna a segunda lista
    if (list_vazia(l1)) {
        return l2;
    }

    // Encontra o último nó da primeira lista
    Lista *ultimo = l1;
    while (ultimo->prox != NULL) {
        ultimo = ultimo->prox;
    }

    // Concatena a segunda lista ao último nó da primeira lista
    ultimo->prox = l2;

    return l1;
}

int main(void) {
    srand(time(NULL)); // Inicializa a semente

    // Cria duas listas encadeadas
    Lista *lista1 = list_cria();
    Lista *lista2 = list_cria();

    // Define tamanhos aleatórios para as listas
    int tamanho1 = rand() % 10;
    int tamanho2 = rand() % 10;

    // Adiciona valores aleatórios de 0 a 50 às listas
    for (int i = 0; i < tamanho1 + 1; i++) {
        lista1 = list_adc(lista1, rand() % 50);
    }
    for (int i = 0; i < tamanho2 + 1; i++) {
        lista2 = list_adc(lista2, rand() % 50);
    }

    // Imprime as listas originais
    printf("Lista 1:\n");
    list_imprime(lista1);
    printf("\nLista 2:\n");
    list_imprime(lista2);

    // Concatena as listas
    Lista *concatenada = concatena(lista1, lista2);

    // Imprime a lista concatenada
    printf("\nLista concatenada:\n");
    list_imprime(concatenada);

    // Libera a memória alocada para as listas
    list_libera(lista1);
    list_libera(lista2);
    list_libera(concatenada);

    return 0;
}