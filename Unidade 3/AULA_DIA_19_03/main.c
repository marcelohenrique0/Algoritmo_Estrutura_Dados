#include "fila.c"

int main(){

    Fila *Q = CriaFila(5);
    for (int i = 0; i < 5; i++){
        InsereFila(Q, i);
    }

    int vazia = FilaVazia(Q);
    if (vazia == 0){
        printf("Fila nao esta vazia\n");
    }
    int cheia = FilaCheia(Q);
    if (cheia == Q->MAX_SIZE){
        printf("Fila esta cheia\n");
    }

    InsereFila(Q, 10);

     int elem = 4;
    if( ConsultaFila(Q, &elem) == 1){
        printf("Elemento consultado: %d\n", elem);
    }

    if (RemoveFila(Q) == 1){
        printf("Removido com sucesso\n");
    }
    
    RemoveFila(Q);

    DestruirFila(&Q);
}