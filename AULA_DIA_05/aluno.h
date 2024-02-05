/*Definiçao de novo tipo : Aluno */
typedef struct aluno Aluno;

/*Funçao que aloca memoria para uma struct aluno, recebe os dados via teclado e retorna um ponteiro para Aluno */
Aluno *recebe_dados(void);

/*Funçao que recebe um ponteiro para Aluno e imprime os daods */
void imprime(Aluno * aluno);

/* Funçao que matricula alunos */

