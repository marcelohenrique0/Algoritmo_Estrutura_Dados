#include "lista.h"
#include <stdlib.h>
#include <stdio.h>



typedef struct lista{
    int info;
    struct lista *proxima_elemento;
}Lista;


Lista* cria_lista(void){
    return NULL;
}

/*Inserção */
Lista *insere_elemento(Lista* lista, int valor){
    //aloca novo nó da lista encadeado
    Lista * novo_no = (Lista*) malloc(sizeof(Lista));
    if(novo_no == NULL){
        exit(1);
    }
    //adiciona valor ao novo nó no campo info
    novo_no->info = valor;
    //coloca o novo nó na  lista
    novo_no->proxima_elemento = lista;

    return novo_no;
}

void imprimir_lista(Lista *lista){
    Lista * contador;
    for(contador = lista; contador != NULL; contador = contador->proxima_elemento){
        printf("%d\n", contador->info);
    }
}  

void lista_vazio(Lista *lista){
    if(lista == NULL){
        printf("Lista vazia\n");
    }
    else{
        printf("Lista não vazia\n");
    }
}

void busca_elemento_lista(Lista *lista, int valor){
    Lista *contador;
    for(contador = lista; contador != NULL; contador = contador->proxima_elemento){
        if(contador->info == valor){
            printf("Elemento encontrado %d\n", contador->info);
            return;
        }
    }
    printf("Elemento não encontrado\n");
}

Lista *lista_retira(Lista *l, int v) {
    Lista *ant = NULL;
    Lista *p = l;

    // Procura o elemento na lista
    while (p != NULL && p->dado != v) {
        ant = p;
        p = p->prox;
    }

    // Se não encontrou o elemento, retorna a lista original
    if (p == NULL) {
        return l;
    }

    // Retira o elemento
    if (ant == NULL) {
        l = p->prox; // Se o elemento a ser retirado é o primeiro da lista
    } else {
        ant->prox = p->prox; // Se o elemento a ser retirado está no meio da lista
    }

    free(p); 
    return l;
}


void lista_libera(Lista *l) {
    Lista *p = l;

    // Percorre a lista liberando a memória de cada nó
    while (p != NULL) {
        Lista *t = p->prox; // Salva o próximo nó
        free(p);
        p = t; // Move para o próximo nó
    }
}
