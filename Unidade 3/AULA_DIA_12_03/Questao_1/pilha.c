#include "pilha.h"

#define N 50 /* numero de elementos */

struct pilha {
    int n;
    float vet[N];
};

Pilha* pilha_cria(void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = 0; /* inicializa com zero elementos */
    return p;
}

void pilha_push (Pilha* p, float v){
    if(p->n == N){ /* capacidade esgotada*/
    exit(1); /*aborta execucao */
    }
    /* insere elemento na proxima posicao livre */
p->vet[p->n] = v;
p->n++;
}

int pilha_vazia(Pilha* p) {
    return (p->n == 0);
}

float pilha_pop(Pilha* p) {
    float v;
    if(pilha_vazia(p)){
        printf("pilha vazia.\n");
        exit(1); /* aborta o programa */
    }
/* retira elemento do topo */
    v = p->vet[p->n-1];
    p->n--;
return v;
}

void pilha_libera(Pilha* p) {
    free(p);
}

void pilha_imprimir(Pilha* p){
    int i;
    for(i = 0; i < p->n; i++){
        printf("%.1f\n", p->vet[i]);
    }
}

float topo(Pilha* p) {
    if (pilha_vazia(p)) {
        printf("pilha vazia.\n");
        exit(1); /* aborta o programa */
    }
    /* Retorna o valor no topo da pilha */
    return p->vet[p->n - 1];
}

void concatena_pilhas(Pilha* p1, Pilha* p2) {
    /* Move todos os elementos de p2 para p1 */
    while (!pilha_vazia(p2)) {
        pilha_push(p1, pilha_pop(p2));
    }
}
