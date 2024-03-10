#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"

int main(void){
    int numero1, numero2;
    int op = 0;

    do{
        printf("----------MENU----------\n");
        printf("1 - SOMA \n");
        printf("2 - SUBSTRAÇÃO \n");
        printf("3 - MULTIPLICAÇÃO \n");
        printf("4 - DIVISÃO\n");
        printf("5 - POTENCIAÇÃO \n");
        printf("5 - SAIR \n");
        printf("---------------------------\n");
        
        printf("DIGITE A OPÇÃO DESEJADA: ");
        scanf("%d", &op);

        printf("Digite o primeiro número: ");
        scanf("%d",&numero1);

        printf("Digite o segundo número: ");
        scanf("%d",&numero2);

        switch(op){
            case 1:
            printf("RESULTADO: %d", adicao(numero1,numero2));
            break;

            case 2:
            printf("RESULTADO: %d", subtracao(numero1,numero2));
            break;
            
            case 3:
            printf("RESULTADO: %d", mutiplicacao(numero1,numero2));
            break;
            
            case 4:
            printf("RESULTADO: %.2f", divisao(numero1,numero2));
            break;
            
            case 5:
            printf("SAINDO...\n");
            break;

            default:
            printf("essa opção nao existe! \n");
            break;
        }
    }while(op != 5);

    return 0;
}