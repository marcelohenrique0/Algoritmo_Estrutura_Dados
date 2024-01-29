#include <stdio.h>
#include <stdlib.h>

int main(void){
     FILE * arquivo = fopen("entrada.txt", "rt");
    if(arquivo==NULL){
        printf("erro na abertura do arquivo");
        exit(1);
    }
    else{
        printf("arquivo aberto! ");
    }
    fputs("Hello World!", arquivo);
    
    if(!fclose(arquivo)){
    printf("arquivo fechado com sucesso! "); //fecha o arquivo criado
}
    return 0;
}
