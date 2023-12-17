#include <stdio.h>
#include <stdlib.h>

struct Funcionario {
    char nome[50];
    float salario;
    int identificador;
    char cargo[50];
};

void preencher(struct Funcionario *funcionario) {
    printf("Digite o nome do funcionário: ");
    scanf("%s", funcionario->nome);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &(funcionario->salario));

    printf("Digite o identificador do funcionário: ");
    scanf("%d", &(funcionario->identificador));

    printf("Digite o cargo do funcionário: ");
    scanf("%s", funcionario->cargo);
}

void imprimir(const struct Funcionario *funcionario) {
    printf("Nome: %s\n", funcionario->nome);
    printf("Salário: %.2f\n", funcionario->salario);
    printf("Identificador: %d\n", funcionario->identificador);
    printf("Cargo: %s\n", funcionario->cargo);
}

void alterarSalario(struct Funcionario funcionarios[], int numFuncionarios) {
    char nomeAlvo[50];
    int encontrado = 0;

    printf("Digite o nome do funcionário que deseja alterar o salário: ");
    scanf("%s", nomeAlvo);

    for (int i = 0; i < numFuncionarios; ++i) {
        int j;
        for (j = 0; nomeAlvo[j] != '\0' && funcionarios[i].nome[j] != '\0'; ++j) {
            if (nomeAlvo[j] != funcionarios[i].nome[j]) {
                break;
            }
        }

        if (nomeAlvo[j] == '\0' && funcionarios[i].nome[j] == '\0') {
            float novoSalario;
            printf("Digite o novo salário para o funcionário %s: ", funcionarios[i].nome);
            scanf("%f", &novoSalario);

            funcionarios[i].salario = novoSalario;

            printf("Salário do funcionário %s alterado com sucesso!\n", funcionarios[i].nome);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Funcionário com o nome %s não encontrado.\n", nomeAlvo);
    }
}

void SalarioMinMax(const struct Funcionario funcionarios[], int numFuncionarios) {
    int MaiorSalario = 0, MenorSalario = 0;

    for (int i = 1; i < numFuncionarios; ++i) {
        if (funcionarios[i].salario > funcionarios[MaiorSalario].salario) {
            MaiorSalario = i;
        }

        if (funcionarios[i].salario < funcionarios[MenorSalario].salario) {
            MenorSalario = i;
        }
    }

    printf("Funcionário com maior salário:\n");
    imprimir(&funcionarios[MaiorSalario]);

    printf("\nFuncionário com menor salário:\n");
    imprimir(&funcionarios[MenorSalario]);
}

int main() {
    const int numFuncionarios = 3;
    struct Funcionario funcionarios[numFuncionarios];

    for (int i = 0; i < numFuncionarios; ++i) {
        preencher(&funcionarios[i]);
        printf("\n");
    }

    printf("\nDados dos funcionários:\n");
    for (int i = 0; i < numFuncionarios; ++i) {
        imprimir(&funcionarios[i]);
        printf("\n");
    }

    alterarSalario(funcionarios, numFuncionarios);
    printf("\nDados dos funcionários após alteração de salário:\n");
    for (int i = 0; i < numFuncionarios; ++i) {
        imprimir(&funcionarios[i]);
        printf("\n");
    }

    SalarioMinMax(funcionarios, numFuncionarios);

    return 0;
}
