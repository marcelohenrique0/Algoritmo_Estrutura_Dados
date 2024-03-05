#include <stdio.h>
#include <stdlib.h>

int main(void){
    //cria o arquivo: entrada.txt no modo texto "t"
    FILE * arquivo = fopen("entrada.txt", "rt");
    int c;
    if(arquivo==NULL){
        printf("erro ao abrir o arquivo! ");
        exit(1);
    }
else {
    printf("arquivo criado! ");
}
    c = fgetc(arquivo); //le um caractere do arquivo
    printf("%c\n, c"); //imprime o caractere lido
    if(!fclose(arquivo)){
    printf("arquivo fechado com sucesso! "); //fecha o arquivo criado
}
    return 0;
}
