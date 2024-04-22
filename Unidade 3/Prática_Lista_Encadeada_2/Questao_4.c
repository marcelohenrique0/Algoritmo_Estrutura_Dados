#include "listas.c"
#include <time.h>

typedef struct lista_dupla Listad;

struct lista_dupla
{
    int dado;
    Listad *prox;
    Listad *ant;
};

// adiciona em uma lista dupla circular
Listad *listdc_adc(Listad *l, int v)
{
    Listad *novo = (Listad *)malloc(sizeof(Listad));
    novo->dado = v;
    novo->prox = novo;
    novo->ant = novo;
    if (!l)
    {
        return novo;
    }
    else
    {
        Listad *ultimo = l->ant;
        novo->prox = l;
        l->ant = novo;
        ultimo->prox = novo;
        novo->ant = ultimo;
        return l;
    }
}

// retira um elemento
Listad *listdc_retira(Listad *l, int v)
{
    Listad *p = l;
    while (p != NULL && p->dado != v)
    {
        p = p->prox;
    }

    if (p == NULL)
    {
        return l; // não achou
    }

    // retira o elemento
    if (l == p)
    { // testa se é o primeiro elemento
        l = p->prox;
    }
    if (p->ant != NULL)
    {
        p->ant->prox = p->prox; // retira o do meio ou do final
    }
    if (p->prox != NULL)
    { // testa se é o último elemento
        p->prox->ant = p->ant;
    }
    free(p);
    return l;
}

void listdc_imprime(Listad *l)
{
    if (l == NULL)
    {
        printf("Lista vazia.\n");
        return;
    }

    Listad *p = l;
    do
    {
        printf("Dado = %d\n", p->dado);
        p = p->prox;
    } while (p != l);
}

Listad *listd_cria()
{
    return NULL;
}

void listd_libera(Listad *l)
{
    if (l == NULL)
    {
        return;
    }

    Listad *p = l;
    Listad *prox = l->prox;
    while (prox != l)
    {
        free(p);
        p = prox;
        prox = prox->prox;
    }
    free(p);
}

int main(void)
{
    int i, valor;
    Listad *listaint = listd_cria(); 
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios
    
    // Adiciona 20 valores aleatórios de 0 a 25 à lista
    for (i = 0; i < 20; i++)
    {
        listaint = listdc_adc(listaint, rand() % 25);
    }
    
    // Imprime a lista
    printf("Lista:\n");
    listdc_imprime(listaint); 
    
    // Lê o valor a ser removido
    printf("\nInsira o valor que deseja eliminar: ");
    scanf("%d", &valor);
    
    // Remove o valor da lista
    listaint = listdc_retira(listaint, valor); 
    
    // Imprime a lista atualizada
    printf("\nLista atualizada:\n");
    listdc_imprime(listaint); 
    
    // Libera a memória alocada para a lista
    listd_libera(listaint);
    
    return 0;
}
