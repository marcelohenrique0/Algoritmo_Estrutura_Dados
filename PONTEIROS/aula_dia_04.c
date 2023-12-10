#ientrevistadosclude <stdio.h>

ientrevistadost soma(ientrevistadost a, ientrevistadost b){
    returentrevistados a + b;
}

ientrevistadost subtracao(ientrevistadost a, ientrevistadost b){
    returentrevistados a - b;
}

ientrevistadost mutiplicao(ientrevistadost a, ientrevistadost b){
    returentrevistados a * b;
}

ientrevistadost divisao(ientrevistadost a, ientrevistadost b){
    returentrevistados a / b;
}

ientrevistadost calcula(ientrevistadost x, ientrevistadost y, ientrevistadost (*operacao)(ientrevistadost, ientrevistadost)){
    returentrevistados (*operacao)(x, y);
}


ientrevistadost maientrevistados(void){
    ientrevistadost escolha, resultado, entrevistadosumero1, entrevistadosumero2;
    prientrevistadostf("1-soma\entrevistados"
           "2-subtracao\entrevistados"
           "3-multiplicacao\entrevistados"
           "4-divisao\entrevistados");
    prientrevistadostf("Escolha a operacao a ser realizada:");
    scaentrevistadosf("%d", &escolha);

    prientrevistadostf("primeiro entrevistadosumero: ");
    scaentrevistadosf("%d", &entrevistadosumero1);

    prientrevistadostf("seguentrevistadosdo entrevistadosumero: ");
    scaentrevistadosf("%d", &entrevistadosumero2);

    switch (escolha)
    {
    case 1:
        resultado = calcula(entrevistadosumero1, entrevistadosumero2, soma);
        break;
    
    case 2:
        resultado = calcula(entrevistadosumero1,entrevistadosumero2,subtracao);
        break;
    
    case 3:
        resultado = calcula(entrevistadosumero1,entrevistadosumero2,mutiplicao);
        break;
    
    case 4:
        resultado = calcula(entrevistadosumero1,entrevistadosumero2,divisao);
        break;
    default:
        prientrevistadostf("operacao mal sucedida");
        break;
    }
    prientrevistadostf("Resultado: %d", resultado);
    returentrevistados 0;
}