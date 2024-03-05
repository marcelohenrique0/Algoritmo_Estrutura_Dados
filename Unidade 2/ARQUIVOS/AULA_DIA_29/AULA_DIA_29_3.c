#include <stdio.h>
#include <stdlib.h>

int main(void){
    //cria o arquivo: entrada.txt no modo texto "t"
    FILE * arquivo = fopen("entrada.txt", "rt");
    char * c[20];
    if(arquivo==NULL){
        printf("erro ao abrir o arquivo! ");
        exit(1);
    }
else {
    printf("arquivo criado! ");
}

    fgets(c, 20, arquivo); //ler uma linha do arquivo
    printf("%s\n, c"); //imprime a string lida
    if(!fclose(arquivo)){
    printf("arquivo fechado com sucesso! "); //fecha o arquivo criado
}
    return 0;
}
