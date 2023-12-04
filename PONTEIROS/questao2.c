#include <stdio.h>
int main(void) {
int x, *p;
x = 100;
p = &x;
printf("Valor de p = %p\tValor de *p = %d", p, *p);
}

//Se tentarmos compilar o programa (não o compile ainda), você acha que o compilador nos
//fornece alguma mensagem? Se sim, responda:
//a) Esta mensagem é de erro ou advertência? 
//R: Advertência.
//b) Por que o compilador emite tal mensagem? 
//R: Pois nao esta sendo usado o operador de endereçamento "&" na linha 5 deveria ser "p = &x".
//c) Compile e execute o programa. A execução foi bem sucedida? 
//R: Nao.
//d) Modifique o trecho de código acima, de modo que nenhuma mensagem seja emitida
//pelo compilador. 
//R: Modificado.
//e) Compile e execute novamente o programa. A execução foi bem sucedida? 
//R: Sim,"Valor de p = 0061FF18   Valor de *p = 100".
