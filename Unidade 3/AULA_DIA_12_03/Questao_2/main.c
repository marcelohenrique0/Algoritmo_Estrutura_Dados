#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"

int main(){
    Pilha* p1 = pilha_cria();
    Pilha* p2 = pilha_cria();
    pilha_push(p1, 1);
    pilha_push(p1, 2);
    pilha_push(p1, 3);
    pilha_push(p2, 4);
    pilha_push(p2, 5);
    pilha_push(p2, 6);

//testando a função topo da pilha ( Questao 1)
   printf("Topo da pilha: %.1f\n", topo(p1));

//testando a função concatena_pilhas ( Questao 2)
    concatena_pilhas(p1, p2);
    printf("Pilha concatenada: \n");
    pilha_imprimir(p1);
    pilha_libera(p1);
    pilha_libera(p2);
    return 0;
}