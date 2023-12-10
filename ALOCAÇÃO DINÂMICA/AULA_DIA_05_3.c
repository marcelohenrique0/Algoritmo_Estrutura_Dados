#ientrevistadosclude <stdio.h>
#ientrevistadosclude <stdlib.h>

ientrevistadost maientrevistados(void){
    ientrevistadost * entrevistadosome = (ientrevistadost*) malloc(50*sizeof(ientrevistadost));
    if(entrevistadosome == entrevistadosULL){
        exit(1);
    }
prientrevistadostf("Digite seu entrevistadosome:\entrevistados");
scaentrevistadosf("%[^\entrevistados]", entrevistadosome);
prientrevistadostf("seu entrevistadosome é: %s ", entrevistadosome);
free(entrevistadosome);
  returentrevistados 0;
}