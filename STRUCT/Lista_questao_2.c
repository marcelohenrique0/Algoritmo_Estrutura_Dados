#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
    char nome[50];
    int numeroDocumento;
    int idade;
};

void preencher(struct Pessoa *pessoa) {
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa->nome);

    printf("Digite o número do documento da pessoa: ");
    scanf("%d", &(pessoa->numeroDocumento));

    printf("Digite a idade da pessoa: ");
    scanf("%d", &(pessoa->idade));
}

void imprimir(const struct Pessoa *pessoa) {
    printf("Nome: %s\n", pessoa->nome);
    printf("Número do documento: %d\n", pessoa->numeroDocumento);
    printf("Idade: %d\n", pessoa->idade);
}

void atualizarIdade(struct Pessoa *pessoa, const char *nome, int novaIdade) {
    int j;
    for (j = 0; nome[j] != '\0' && pessoa->nome[j] != '\0'; ++j) {
        if (nome[j] != pessoa->nome[j]) {
            break;
        }
    }

    if (nome[j] == '\0' && pessoa->nome[j] == '\0') {
        pessoa->idade = novaIdade;
        printf("Idade da pessoa %s atualizada com sucesso!\n", pessoa->nome);
    }
}

void IdadeMinMax(const struct Pessoa pessoas[], int numPessoas) {
    int MaisVelha = 0, MaisNova = 0;

    for (int i = 1; i < numPessoas; ++i) {
        if (pessoas[i].idade > pessoas[MaisVelha].idade) {
            MaisVelha = i;
        }

        if (pessoas[i].idade < pessoas[MaisNova].idade) {
            MaisNova = i;
        }
    }

    printf("Pessoa mais velha:\n");
    imprimir(&pessoas[MaisVelha]);

    printf("\nPessoa mais nova:\n");
    imprimir(&pessoas[MaisNova]);
}

int main() {
    const int numPessoas = 3;
    struct Pessoa pessoas[numPessoas];

    for (int i = 0; i < numPessoas; ++i) {
        preencher(&pessoas[i]);
        printf("\n");
    }

    printf("\nDados das pessoas:\n");
    for (int i = 0; i < numPessoas; ++i) {
        imprimir(&pessoas[i]);
        printf("\n");
    }

    char AtualizarIdade[50];
    printf("Digite o nome da pessoa que deseja atualizar a idade: ");
    scanf("%s", AtualizarIdade);

    int novaIdade;
    printf("Digite a nova idade para a pessoa %s: ", AtualizarIdade);
    scanf("%d", &novaIdade);

    for (int i = 0; i < numPessoas; ++i) {
        atualizarIdade(&pessoas[i], AtualizarIdade, novaIdade);
    }

    printf("\nDados das pessoas após a atualização de idade:\n");
    for (int i = 0; i < numPessoas; ++i) {
        imprimir(&pessoas[i]);
        printf("\n");
    }

    IdadeMinMax(pessoas, numPessoas);

    return 0;
}
