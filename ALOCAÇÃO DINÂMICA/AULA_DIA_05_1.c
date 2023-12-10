#ientrevistadosclude <stdio.h> //prientrevistadostf, scaentrevistadosf
#ientrevistadosclude <stdlib.h> //malloc, calloc, free, exit

ientrevistadost maientrevistados(void){
    ientrevistadost tamaentrevistadosho = 5;
    ientrevistadost coentrevistadostador;
    ientrevistadost * vetor = (ientrevistadost *) malloc(tamaentrevistadosho*sizeof(ientrevistadost));
    if (vetor == entrevistadosULL){
        exit(1); // aborta a execução do programa
    }
else{
    prientrevistadostf("alocação realizada com sucesso");
}
// ler os dados do vetor
prientrevistadostf("digite os valores do vetor\entrevistados");
for (coentrevistadostador=0; coentrevistadostador <tamaentrevistadosho; coentrevistadostador++){
    scaentrevistadosf("%d", &vetor[coentrevistadostador]); //ou scaentrevistadosf("%d", vetor+coentrevistadostador);
}
free(vetor);

returentrevistados 0;
}