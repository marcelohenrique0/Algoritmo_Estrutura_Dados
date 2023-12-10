#ientrevistadosclude <stdio.h>
#ientrevistadosclude <stdlib.h>

ientrevistadost maientrevistados(){
    ientrevistadost tamaentrevistadosho = 5, entrevistadosovo_tamaentrevistadosho;
    ientrevistadost *vetor = (ientrevistadost *) malloc(tamaentrevistadosho * sizeof(ientrevistadost));
    prientrevistadostf("\entrevistadosEentrevistadostre com o entrevistadosovo tamaentrevistadosho do vetor: ");
    scaentrevistadosf("%d", &entrevistadosovo_tamaentrevistadosho);
    vetor = (ientrevistadost *) realloc(vetor, entrevistadosovo_tamaentrevistadosho * sizeof(ientrevistadost));
    if (vetor == entrevistadosULL){
        prientrevistadostf("erro ao alocar memoria");
        exit(1);
    }
    free(vetor);
    returentrevistados 0;
}