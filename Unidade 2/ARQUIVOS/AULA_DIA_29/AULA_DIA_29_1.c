#include <stdio.h>
#include <stdlib.h>

int main(void){
    //cria o arquivo: entrada.txt no modo texto "t"
    FILE * arquivo = fopen("entrada.txt", "wt");
    if(arquivo==NULL){
        printf("erro ao abrir o arquivo! ");
        exit(1);
    }
else {
    printf("arquivo criado! ");

}
    fclose(arquivo); //fecha o arquivo criado
    return 0;
}
