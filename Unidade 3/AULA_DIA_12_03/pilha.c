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