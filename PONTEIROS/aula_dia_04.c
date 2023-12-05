#include <stdio.h>

int soma(int a, int b){
    return a + b;
}

int subtracao(int a, int b){
    return a - b;
}

int mutiplicao(int a, int b){
    return a * b;
}

int divisao(int a, int b){
    return a / b;
}

int calcula(int x, int y, int (*operacao)(int, int)){
    return (*operacao)(x, y);
}


int main(void){
    int escolha, resultado, numero1, numero2;
    printf("1-soma\n"
           "2-subtracao\n"
           "3-multiplicacao\n"
           "4-divisao\n");
    printf("Escolha a operacao a ser realizada:");
    scanf("%d", &escolha);

    printf("primeiro numero: ");
    scanf("%d", &numero1);

    printf("segundo numero: ");
    scanf("%d", &numero2);

    switch (escolha)
    {
    case 1:
        resultado = calcula(numero1, numero2, soma);
        break;
    
    case 2:
        resultado = calcula(numero1,numero2,subtracao);
        break;
    
    case 3:
        resultado = calcula(numero1,numero2,mutiplicao);
        break;
    
    case 4:
        resultado = calcula(numero1,numero2,divisao);
        break;
    default:
        printf("operacao mal sucedida");
        break;
    }
    printf("Resultado: %d", resultado);
    return 0;
}