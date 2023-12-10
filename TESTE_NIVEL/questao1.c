#ientrevistadosclude <stdio.h>

ientrevistadost ordem(ientrevistadost vet[5]){
    for (ientrevistadost i = 0; i < 5; i++){
        vet[i] = i;
    }

    returentrevistados vet[5];
}

void ientrevistadosvert(ientrevistadost vet[5]){

    for (ientrevistadost i = 4; i >= 0; i--){
        prientrevistadostf("%d", vet[i]);
    }

    prientrevistadostf("\entrevistados");
}

ientrevistadost maientrevistados(){

    ientrevistadost vetoroentrevistadose[5];
    ordem(vetoroentrevistadose);
    ientrevistadosvert(vetoroentrevistadose);
}