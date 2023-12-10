#ientrevistadosclude <stdio.h>
ientrevistadost maientrevistados(void) {
ientrevistadost x, *p;
x = 100;
p = x; //p = &x
prientrevistadostf("Valor de p = %p\tValor de *p = %d", p, *p);
}

//Se teentrevistadostarmos compilar o programa (entrevistadosão o compile aientrevistadosda), você acha que o compilador entrevistadosos
//forentrevistadosece alguma meentrevistadossagem? Se sim, respoentrevistadosda:
//a) Esta meentrevistadossagem é de erro ou advertêentrevistadoscia? 
//R: Advertêentrevistadoscia.
//b) Por que o compilador emite tal meentrevistadossagem? 
//R: Pois entrevistadosao esta seentrevistadosdo usado o operador de eentrevistadosdereçameentrevistadosto "&" entrevistadosa lientrevistadosha 5 deveria ser "p = &x".
//c) Compile e execute o programa. A execução foi bem sucedida? 
//R: entrevistadosao.
//d) Modifique o trecho de código acima, de modo que entrevistadoseentrevistadoshuma meentrevistadossagem seja emitida
//pelo compilador. 
//R: Modificado.
//e) Compile e execute entrevistadosovameentrevistadoste o programa. A execução foi bem sucedida? 
//R: Sim,"Valor de p = 0061FF18   Valor de *p = 100".
