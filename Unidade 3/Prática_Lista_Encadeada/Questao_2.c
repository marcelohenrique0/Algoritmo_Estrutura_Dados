#include "lista.c"
#include <time.h>

// Função para encontrar o último nó da lista encadeada
Lista *ultimo(Lista *l) {
    // Verifica se a lista está vazia
    if (list_vazia(l)) {
        printf("A lista está vazia\n");
        exit(1);
    }

    // Percorre a lista até encontrar o último nó
    while (l->prox != NULL) {
        l = l->prox; // Avança para o próximo nó
    }

    return l;
}

int main(void) {
    srand(time(NULL)); // Inicializa a semente

    // Cria uma lista encadeada e adiciona 10 valores aleatórios de 0 a 50
    Lista *lista = list_cria();
    for (int i = 0; i < 10; i++) {
        lista = list_adc(lista, rand() % 50);
    }

    // Imprime a lista
    printf("Lista: ");
    list_imprime(lista);

    // Encontra o último nó da lista
    Lista *ultimo_no = ultimo(lista);

    // Imprime o valor do último nó
    printf("\nO valor do último nó da lista: %d\n", ultimo_no->dado);

    // Libera a memória alocada para a lista
    list_libera(lista);

    return 0;
}