#include <stdio.h>
#include <stdlib.h>

typedef struct ingresso{
    float preco;
    char local[20];
    char atracao[20];
}Ingresso;

void preenche(Ingresso * i){
    printf("Informe o preco: \n ");
    scanf("%f", &(i->preco));

    printf("Informe o local: \n ");
    scanf(" %[^\n]", i->local);

    printf("Informe a atracao: \n ");
    scanf(" %[^\n]", i->atracao);
}

void imprime(Ingresso* i){
    printf("Preco do ingresso: %.f \n", i->preco);
    printf("Local do ingresso: %s \n", i->local);
    printf("Atracao: %s \n", i->atracao);
}

void altera_preco(Ingresso* i, float valor){
    i->preco = valor;
}

void imprime_menor_maior_preco(int n, Ingresso* vet){
    int maior = 0;
    int menor = 0;

    for(int i = 0; i < n; i++){
        if (vet[i].preco > maior){
            maior = i;
        }
    }

    for(int i = 0; i < n; i++){
        if (vet[i].preco < menor){
            menor = vet[i].preco;
        }
    }
    
    printf("Evento mais caro:\n");
    imprime(&vet[maior]);
    printf("Evento mais barato:\n");
    imprime(&vet[menor]);
 }

int main(){
    const int numIngressos = 3;
    Ingresso ingressos[numIngressos];

    for(int i = 0; i < numIngressos; i++){
        preenche(&ingressos[i]);
    }  
    for(int i = 0; i < numIngressos; i++){
        imprime(&ingressos[i]);
    }   
    imprime_menor_maior_preco(numIngressos, ingressos);
    return 0;
 }