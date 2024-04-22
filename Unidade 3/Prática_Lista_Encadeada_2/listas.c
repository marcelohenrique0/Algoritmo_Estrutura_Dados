#include <stdio.h>
#include <stdlib.h>
#include <listas.h>

// Definição da estrutura para lista simplesmente encadeada
typedef struct lista
{
    int dado;
    struct lista *prox;
} Lista;

// Definição da estrutura para lista duplamente encadeada
typedef struct listad
{
    int dado;
    struct listad *prox;
    struct listad *ant;
} Listad;

// Implementações das funções para lista simplesmente encadeada

Lista *list_cria(void)
{
    return NULL;
}

Lista *list_adc(Lista *l, int i)
{
    Lista *novo = (Lista *)malloc(sizeof(Lista));
    if (novo == NULL)
    {
        printf("[ERRO] memória insuficiente!");
        exit(1);
    }
    novo->dado = i;
    novo->prox = l;
    return novo;
}

void list_imprime(Lista *l)
{
    Lista *p;
    for (p = l; p != NULL; p = p->prox)
    {
        printf("Dado = %d\n", p->dado);
    }
}

int list_vazia(Lista *l)
{
    return l == NULL ? 1 : 0;
}

Lista *list_busca(Lista *l, int v)
{
    Lista *p;
    for (p = l; p != NULL; p = p->prox)
    {
        if (p->dado == v)
        {
            return p;
        }
    }
    return NULL;
}

Lista *list_retira(Lista *l, int v)
{
    Lista *ant = NULL;
    Lista *p = l;
    while (p != NULL && p->dado != v)
    {
        ant = p;
        p = p->prox;
    }
    if (p == NULL)
    {
        return l; // não achou
    }
    if (ant == NULL)
    {
        l = p->prox;
    }
    else
    {
        ant->prox = p->prox;
    }
    free(p);
    return l;
}

void list_libera(Lista *l)
{
    Lista *p = l;
    while (p != NULL)
    {
        Lista *t = p->prox;
        free(p);
        p = t;
    }
}

// Implementações das funções para lista duplamente encadeada

Listad *listd_cria(void)
{
    return NULL;
}

void listd_libera(Listad *l)
{
    Listad *p = l;
    while (p != NULL)
    {
        Listad *t = p->prox;
        free(p);
        p = t;
    }
}

Listad *listd_adc(Listad *l, int v)
{
    Listad *novo = (Listad *)malloc(sizeof(Listad));
    if (novo == NULL)
    {
        printf("[ERRO] memória insuficiente!");
        exit(1);
    }
    novo->dado = v;
    novo->prox = l;
    novo->ant = NULL;
    if (l)
        l->ant = novo;
    return novo;
}

Listad *listd_busca(Listad *l, int v)
{
    Listad *p;
    for (p = l; p != NULL; p = p->prox)
    {
        if (p->dado == v)
        {
            return p;
        }
    }
    return NULL;
}

Listad *listd_retira(Listad *l, int v)
{
    Listad *p = listd_busca(l, v);

    if (p == NULL)
    {
        return l;
    }
    if (l == p)
    {
        l = p->prox;
    }
    else
    {
        p->ant->prox = p->prox;
    }
    if (p->prox != NULL)
    {
        p->prox->ant = p->ant;
    }
    free(p);
    return l;
}

int listd_vazia(Listad *l)
{
    return l == NULL ? 1 : 0;
}

void listd_imprime(Listad *l)
{
    Listad *p;
    for (p = l; p != NULL; p = p->prox)
    {
        printf("Dado = %d\n", p->dado);
    }
}

// Implementações das funções para lista duplamente encadeada circular

Listad *listdc_adc(Listad *l, int v)
{
    Listad *novo = (Listad *)malloc(sizeof(Listad));
    if (novo == NULL)
    {
        printf("[ERRO] memória insuficiente!");
        exit(1);
    }
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

Listad *listdc_busca(Listad *l, int v)
{
    Listad *p;
    for (p = l; p != NULL; p = p->prox)
    {
        if (p->dado == v)
        {
            return p;
        }
    }
    return NULL;
}

Listad *listdc_retira(Listad *l, int v)
{
    Listad *p = listd_busca(l, v);

    if (p == NULL)
    {
        return l;
    }
    if (l == p)
    {
        l = p->prox;
    }
    if (p->ant != NULL)
    {
        p->ant->prox = p->prox;
    }
    if (p->prox != NULL)
    {
        p->prox->ant = p->ant;
    }
    free(p);
    return l;
}

int listdc_vazia(Listad *l)
{
    return l == NULL ? 1 : 0;
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

// Main function for testing

int main()
{
    // Testing...
    Lista *lista_simples = list_cria();
    lista_simples = list_adc(lista_simples, 10);
    lista_simples = list_adc(lista_simples, 20);
    lista_simples = list_adc(lista_simples, 30);
    printf("Lista simplesmente encadeada:\n");
    list_imprime(lista_simples);
    printf("\n");

    Listad *lista_dupla = listd_cria();
    lista_dupla = listd_adc(lista_dupla, 100);
    lista_dupla = listd_adc(lista_dupla, 200);
    lista_dupla = listd_adc(lista_dupla, 300);
    printf("Lista duplamente encadeada:\n");
    listd_imprime(lista_dupla);
    printf("\n");

    Listad *lista_dupla_circular = listdc_adc(NULL, 1000);
    lista_dupla_circular = listdc_adc(lista_dupla_circular, 2000);
    lista_dupla_circular = listdc_adc(lista_dupla_circular, 3000);
    printf("Lista duplamente encadeada circular:\n");
    listdc_imprime(lista_dupla_circular);
    printf("\n");

    return 0;
}