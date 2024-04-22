#include "listas.c"
#include <time.h>

// Função para imprimir a lista duplamente encadeada em ordem reversa
void l2circ_imprime_rev(Listad *l) {
    if (l == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    // Inicia a variável 'p' como o último nó da lista
    Listad *p = l;
    while (p->ant != NULL) {
        p = p->ant;
    }
    
    // Percorre a lista duplamente encadeada em ordem reversa e imprime os dados de cada nó
    while (p != NULL) {
        printf("Dado = %d\n", p->dado);
        p = p->prox;
    }
}

int main(void) {
    srand(time(NULL)); // Inicializa a semente

    // Cria uma lista duplamente encadeada e adiciona 10 valores aleatórios de 0 a 50
    Listad *lista = listd_cria();
    for (int i = 0; i < 10; i++) {
        lista = listdc_adc(lista, rand() % 50);
    }

    // Imprime a lista duplamente encadeada em ordem reversa
    l2circ_imprime_rev(lista);
    printf("============\n");

    listdc_imprime(lista);

    listd_libera(lista);

    return 0;
}
