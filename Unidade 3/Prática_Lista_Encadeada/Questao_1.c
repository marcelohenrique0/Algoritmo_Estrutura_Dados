#include "lista.c"
#include <time.h>

// para contar quantos elementos na lista são maiores que um dado valor 'n'
int maiores(Lista *l, int n) {
    Lista *p;
    int k = 0;
    
    //mostra a lista
    printf("\nLista: ");
    list_imprime(l);

    // percorre a lista
    for (p = l; p != NULL; p = p->prox) {
        if (p->dado > n) { // Verifica se o dado do nó é maior que 'n'
            k++;
        }
    }
    return k;
}

int main(void) {
    int i, no, valor;
    Lista *listaint = list_cria();
    srand(time(NULL)); // semente aleatoria

    // Adiciona 10 valores aleatórios de 0 a 50 à lista
    for (i = 0; i < 10; i++) {
        listaint = list_adc(listaint, rand() % 50);
    }

    // pede para o usuário inserir um valor para comparar com a lista
    printf("Insira um valor para descobrir quantos maiores que ele existem na lista: ");
    scanf("%d", &valor);

    //chama a função 'maiores' para contar os elementos maiores que o valor inserido
    no = maiores(listaint, valor);

    printf("\nExistem %d nós com dados maiores que %d na lista\n", no, valor);

    list_libera(listaint);
    return 0;
}
