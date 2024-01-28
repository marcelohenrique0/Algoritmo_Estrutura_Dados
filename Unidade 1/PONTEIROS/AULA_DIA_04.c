#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int divisao(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Erro: divisão por zero\n");
        return 0;
    }
}

int calcula(int x, int y, int (*operacao)(int, int)) {
    return (*operacao)(x, y);
}

int main(void) {
    int escolha, resultado, numero1, numero2;

    printf("1-soma\n"
           "2-subtracao\n"
           "3-multiplicacao\n"
           "4-divisao\n");
    printf("Escolha a operacao a ser realizada: ");
    scanf("%d", &escolha);

    printf("Primeiro numero: ");
    scanf("%d", &numero1);

    printf("Segundo numero: ");
    scanf("%d", &numero2);

    switch (escolha) {
        case 1:
            resultado = calcula(numero1, numero2, soma);
            break;
        
        case 2:
            resultado = calcula(numero1, numero2, subtracao);
            break;
        
        case 3:
            resultado = calcula(numero1, numero2, multiplicacao);
            break;
        
        case 4:
            resultado = calcula(numero1, numero2, divisao);
            break;
        
        default:
            printf("Operacao mal sucedida\n");
            return 1; // Retorna um código de erro
    }
    printf("Resultado: %d\n", resultado);
    return 0;
}
