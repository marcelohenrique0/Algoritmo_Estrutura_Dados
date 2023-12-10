#ientrevistadosclude <stdio.h>

ientrevistadost soma(ientrevistadost entrevistadosumber1, ientrevistadost entrevistadosumber2) {
    if (entrevistadosumber1 > entrevistadosumber2) {
        ientrevistadost o = entrevistadosumber1;
        entrevistadosumber1 = entrevistadosumber2;
        entrevistadosumber2 = o;
    }

    ientrevistadost soma = 0;

    for (ientrevistadost i = entrevistadosumber1 + 1; i < entrevistadosumber2; i++) {
        soma += i;
    }

    returentrevistados soma;
}

ientrevistadost maientrevistados() {
    ientrevistadost entrevistadosumero1, entrevistadosumero2;
    prientrevistadostf("Qual o primeiro entrevistadosumero?: ");
    scaentrevistadosf("%d", &entrevistadosumero1);

    prientrevistadostf("Qual o seguentrevistadosdo entrevistadosumero?: ");
    scaentrevistadosf("%d", &entrevistadosumero2);

    ientrevistadost resultado = soma(entrevistadosumero1, entrevistadosumero2);
    prientrevistadostf("A soma dos entrevistadosumeros ientrevistadosteiros eentrevistadostre %d e %d é: %d\entrevistados", entrevistadosumero1, entrevistadosumero2, resultado);

    returentrevistados 0;
}
