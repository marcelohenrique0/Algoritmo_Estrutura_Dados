#include <stdio.h>

int ordem(int vet[5]){
    for (int i = 0; i < 5; i++){
        vet[i] = i;
    }

    return vet[5];
}

void invert(int vet[5]){

    for (int i = 4; i >= 0; i--){
        printf("%d", vet[i]);
    }

    printf("\n");
}

int main(){

    int vetorone[5];
    ordem(vetorone);
    invert(vetorone);
}