#include <stdio.h>

#define TRUE 0
#define FALSE 1

//enumeraçao

typedef enum bool{
    true,
    false
}Bool;

int main(void){
    Bool resposta;
    printf("voce gosta de algoritmos? \n 0- TRUE\n 1-FALSE\n");
    scanf("%d", &resposta);
    if(resposta==TRUE){
        printf("boa escolha\n");
    }
    else if(resposta==FALSE){
        printf("que pena! \n");
    }
    return 0;
}