#include <stdio.h>

int main (){

int i ;
for ( i =1 ; i <= 100 ; i *=100) {

if ( i ==30 ) 
{
break ;
}

else {
printf ("%2d\n" ,2* i ) ;
}

}

printf ("Fim do laco !\n") ;
return 0;
}

//RESPOSTAS:
// O programa faz um loop de i(1) multiplicado por 100, sendo um loop de unica rodada apenas.
// Logo, o programa imprime 100*2 = 200 e fim do laço de repetiçao!