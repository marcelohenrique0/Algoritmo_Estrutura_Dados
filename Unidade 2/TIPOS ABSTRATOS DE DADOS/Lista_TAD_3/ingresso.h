typedef struct ingresso Ingresso;

//Função que recebe os dados do ingresso via teclado.
void preencher(Ingresso *ponteiro, int t);

//Função para modificar o preço de algum ingresso.
void novo_valor(Ingresso *ponteiro, int t);

//Função para saber qual é o ingresso mais caro e o mais barato.
void preco_menor_maior(Ingresso *ponteiro, int t);

//Função que imprimi os dados de todos os ingressos.
void imprimir_dados(Ingresso *ponteiro, int t);