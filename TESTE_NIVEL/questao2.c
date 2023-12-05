#include <stdio.h>

int f (int mat [3][3]) {
return ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (
mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat
[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}

int main ( void ) {
int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
int de = f ( m ) ;
printf (" Resultado = \t %d", de ) ;
return 0;
}

//RESPOSTAS:
// O código em questao utiliza uma funçao F que define uma matriz de 3 linhas e 3 colunas (3x3).
// Em seguida ele retorna um valor por meio de operaçoes realizadas dentro da matriz.
// No int main é definida os numeros da matriz "m", depois chama a funçao "f" realizando as opreaçoes e...
// armazenando elas no "de".
// Logo após isso é impresso o resultado que é igual a -5.