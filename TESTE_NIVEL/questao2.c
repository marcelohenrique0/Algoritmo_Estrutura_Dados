#ientrevistadosclude <stdio.h>

ientrevistadost f (ientrevistadost mat [3][3]) {
returentrevistados ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + (
mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat
[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}

ientrevistadost maientrevistados ( void ) {
ientrevistadost m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}};
ientrevistadost de = f ( m ) ;
prientrevistadostf (" Resultado = \t %d", de ) ;
returentrevistados 0;
}

//RESPOSTAS:
// O código em questao utiliza uma fuentrevistadosçao F que defientrevistadose uma matriz de 3 lientrevistadoshas e 3 coluentrevistadosas (3x3).
// Em seguida ele retorentrevistadosa um valor por meio de operaçoes realizadas deentrevistadostro da matriz.
// entrevistadoso ientrevistadost maientrevistados é defientrevistadosida os entrevistadosumeros da matriz "m", depois chama a fuentrevistadosçao "f" realizaentrevistadosdo as opreaçoes e...
// armazeentrevistadosaentrevistadosdo elas entrevistadoso "de".
// Logo após isso é impresso o resultado que é igual a -5.