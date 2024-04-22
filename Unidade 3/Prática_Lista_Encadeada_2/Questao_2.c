#include "listas.c"
#include <time.h>

// Função para imprimir os dados da lista circular
void lcirc_imprime(Lista *l) {
    Lista *p = l;
    
    // Percorre a lista circular e imprime os dados de cada nó
    do {
        printf("Dado = %d\n", p->dado);
        p = p->prox;
    } while (p != l);
}

int main(void) {
    srand(time(NULL)); // Inicializa a semente

    // Cria uma lista circular e adiciona 10 valores aleatórios de 0 a 50
    Lista *lista = list_cria();
    for (int i = 0; i < 10; i++) {
        lista = listc_adc(lista, rand() % 50);
    }

    lcirc_imprime(lista);

    list_libera(lista);

    return 0;
}
