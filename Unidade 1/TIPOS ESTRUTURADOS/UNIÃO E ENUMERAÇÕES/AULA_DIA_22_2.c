#include <stdio.h>
#include <stdlib.h>

//Estrutura para armazenar um documento por vez (CPF ou RG)
typedef union documentos{
    char rg[15];
    char cpf[15];
}Documentos;

typedef struct pessoa{
    char nome[20];
    int idade;
    Documentos doc; //variavel para armazenar o CPF ou RG
}Pessoa;

void dados_pessoa(Pessoa * p){
/*
FUNÇAO QUE PRENCHE OS DADOS DE UMA VARIAVEL DO TIPO PESSOA (STRUCT)
*/
int opcao;
printf("informe o nome: \t");
scanf(" %[^\n]", p->nome);
printf("\ninforme a idade: \t");
scanf("%d", &p->idade);
printf("digite 1 para CPF ou 0 para RG");
scanf("%d", &opcao);
if(opcao){
        scanf(" %[^\n]", p->doc.cpf);
}
else{
   scanf(" %[^\n]", p->doc.rg); 
}
}

int main(void){
    Pessoa * pessoa = malloc(sizeof(Pessoa));
    dados_pessoa(pessoa); //a funçao que recebe o endereço da variavel
    free(pessoa);

    return 0;
}                