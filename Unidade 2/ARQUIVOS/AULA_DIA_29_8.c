#include <stdio.h>

int main(void){
    int c;
    int nlinhas = 0;
    FILE *fp;
    /* abre o arquivo para leitura*/
    fp = fopen("entrada.txt", "rt");
    if(fp == NULL){
        printf("nao foi possivel abrir o arquivo. \n");
        return 1;
    }
    /* lê caractere a caractere */
    while((c = fgetc(fp)) != EOF){
        if(c == '\n')
        nlinhas++;
    }
    /* fecha o arquivo */
    fclose(fp);
    /* exibe o resultado na tela */
    printf("numero de linhas = %d\n", nlinhas);
    return 0;
}