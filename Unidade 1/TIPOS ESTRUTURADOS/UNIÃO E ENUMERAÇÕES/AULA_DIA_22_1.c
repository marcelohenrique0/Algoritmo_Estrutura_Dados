#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[20];
    int idade;
}Pessoa;

void dados_pessoa(Pessoa * p){
/*
FUNÇAO QUE PRENCHE OS DADOS DE UMA VARIAVEL DO TIPO PESSOA (STRUCT)
*/
printf("informe o nome: \t");
scanf(" %[^\n]", p->nome);
printf("\ninforme a idade: \t");
scanf("%d", &p->idade);
}

int main(void){
    Pessoa * pessoa = malloc(sizeof(Pessoa));
    dados_pessoa(pessoa); //a funçao que recebe o endereço da variavel
    free(pessoa);

    return 0;
}                