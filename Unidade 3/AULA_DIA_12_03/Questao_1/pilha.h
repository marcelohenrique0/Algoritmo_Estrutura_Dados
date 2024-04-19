typedef struct pilha Pilha;

// Cria uma pilha vazia
Pilha* pilha_cria(void);

// Insere um elemento na pilha
void pilha_push(Pilha* p, float v);

// Remove um elemento da pilha
float pilha_pop(Pilha* p);

// Verifica se a pilha está vazia
int pilha_vazia(Pilha* p);

// Libera a memória alocada para a pilha
void pilha_libera(Pilha* p);

// Imprime a pilha
void pilha_imprimir(Pilha* p);

float topo(Pilha* p);

void concatena_pilhas(Pilha* p1, Pilha* p2);