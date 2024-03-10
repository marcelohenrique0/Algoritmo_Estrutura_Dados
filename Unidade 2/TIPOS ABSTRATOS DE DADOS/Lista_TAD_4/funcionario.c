#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario {
    char funcional[10];
    char nome[50];
    char departamento;
    float salario;
} Funcionario;

void copiaDados(FILE* fl, int n, Funcionario** funcionaio) {
    *funcionaio = (Funcionario*)malloc(n * sizeof(Funcionario));

    for (int i = 0; i < n; i++) {
        fscanf(fl, "%s %s %c %f\n", (*funcionaio)[i].funcional, (*funcionaio)[i].nome, &(*funcionaio)[i].departamento, &(*funcionaio)[i].salario);
    }
}

void imprimeFolhaPagamento(int n, Funcionario** funcionaio, char departamento) {
    float totalGasto = 0.0;

    printf("\nFolha de pagamento %c:\n", departamento);
    for (int i = 0; i < n; i++) {
        if ((*funcionaio)[i].departamento == departamento) {
            totalGasto += (*funcionaio)[i].salario;
            printf("Funcional: %s\t Nome: %s\t Salario: %.2f\n", (*funcionaio)[i].funcional,(*funcionaio)[i].nome,(*funcionaio)[i].salario);
        }
    }

    printf("Total de gastos %c: %.2f\n", departamento, totalGasto);
}