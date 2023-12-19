#include <stdio.h>

int soma(int number1, int number2) {
    if (number1 > number2) {
        int o = number1;
        number1 = number2;
        number2 = o;
    }

    int soma = 0;

    for (int i = number1 + 1; i < number2; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int numero1, numero2;
    printf("Qual o primeiro numero?: ");
    scanf("%d", &numero1);

    printf("Qual o segundo numero?: ");
    scanf("%d", &numero2);

    int resultado = soma(numero1, numero2);
    printf("A soma dos numeros inteiros entre %d e %d é: %d\n", numero1, numero2, resultado);

    return 0;
}
