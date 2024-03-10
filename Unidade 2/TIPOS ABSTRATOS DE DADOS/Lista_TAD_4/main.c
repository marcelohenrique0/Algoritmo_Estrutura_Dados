#include <stdio.h>
#include <stdlib.h>
#include "funcionario.c"
int main() {
    FILE* arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int num_func;
    fscanf(arquivo, "%d\n", &num_func);

    Funcionario* funcionaio;
    copiaDados(arquivo, num_func, &funcionaio);

    fclose(arquivo);

    imprimeFolhaPagamento(num_func, &funcionaio, 'A');
    imprimeFolhaPagamento(num_func, &funcionaio, 'B');
    imprimeFolhaPagamento(num_func, &funcionaio, 'C');

    free(funcionaio);

    return 0;
}