#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14

// Definição das estruturas para as formas geométricas
typedef struct {
    float b; // base
    float h; // altura
} Retangulo;

typedef struct {
    float b; // base
    float h; // altura
} Triangulo;

typedef struct {
    float r; // raio
} Circulo;

// Enumeração para identificar o tipo de forma geométrica
typedef enum {
    RETANGULO,
    TRIANGULO,
    CIRCULO
} TipoForma;

// União para armazenar diferentes tipos de formas geométricas
typedef union {
    Retangulo ret;
    Triangulo tri;
    Circulo circ;
} Forma;

// Estrutura para a lista de formas geométricas
typedef struct listaFormas {
    TipoForma tipo;
    Forma forma;
    struct listaFormas *prox;
} ListaFormas;

// Função para criar um retângulo e adicionar à lista
ListaFormas *cria_ret(ListaFormas *lista, float base, float altura) {
    ListaFormas *novo = (ListaFormas *)malloc(sizeof(ListaFormas));
    if (novo == NULL) {
        printf("[ERRO] Memória insuficiente!\n");
        exit(EXIT_FAILURE);
    }
    novo->tipo = RETANGULO;
    novo->forma.ret.b = base;
    novo->forma.ret.h = altura;
    novo->prox = lista;
    return novo;
}

// Função para criar um triângulo e adicionar à lista
ListaFormas *cria_tri(ListaFormas *lista, float base, float altura) {
    ListaFormas *novo = (ListaFormas *)malloc(sizeof(ListaFormas));
    if (novo == NULL) {
        printf("[ERRO] Memória insuficiente!\n");
        exit(EXIT_FAILURE);
    }
    novo->tipo = TRIANGULO;
    novo->forma.tri.b = base;
    novo->forma.tri.h = altura;
    novo->prox = lista;
    return novo;
}

// Função para criar um círculo e adicionar à lista
ListaFormas *cria_circ(ListaFormas *lista, float raio) {
    ListaFormas *novo = (ListaFormas *)malloc(sizeof(ListaFormas));
    if (novo == NULL) {
        printf("[ERRO] Memória insuficiente!\n");
        exit(EXIT_FAILURE);
    }
    novo->tipo = CIRCULO;
    novo->forma.circ.r = raio;
    novo->prox = lista;
    return novo;
}

// Função para calcular a área de um retângulo
static float ret_area(Retangulo r) {
    return r.b * r.h;
}

// Função para calcular a área de um triângulo
static float tri_area(Triangulo t) {
    return (t.b * t.h) / 2;
}

// Função para calcular a área de um círculo
static float circ_area(Circulo c) {
    return PI * c.r * c.r;
}

// Função para encontrar a maior área entre as formas geométricas na lista
float max_area(ListaFormas *lista) {
    float maior_area = 0.0;
    ListaFormas *ptr = lista;
    while (ptr != NULL) {
        float area;
        switch (ptr->tipo) {
            case RETANGULO:
                area = ret_area(ptr->forma.ret);
                break;
            case TRIANGULO:
                area = tri_area(ptr->forma.tri);
                break;
            case CIRCULO:
                area = circ_area(ptr->forma.circ);
                break;
            default:
                printf("[ERRO] Forma geométrica inválida!\n");
                exit(EXIT_FAILURE);
        }
        if (area > maior_area) {
            maior_area = area;
        }
        ptr = ptr->prox;
    }
    return maior_area;
}

// Função para liberar a memória alocada para a lista de formas geométricas
void libera_lista(ListaFormas *lista) {
    ListaFormas *atual = lista;
    while (atual != NULL) {
        ListaFormas *prox = atual->prox;
        free(atual);
        atual = prox;
    }
}

int main(void) {
    ListaFormas *lista = NULL;
    
    // Criando algumas formas geométricas
    lista = cria_ret(lista, 2.0, 6.0);
    lista = cria_tri(lista, 5.0, 2.0);
    lista = cria_circ(lista, 2.0);
    
    // Calculando a maior área
    float maior_area = max_area(lista);
    printf("Maior área: %.2f\n", maior_area);
    
    // Liberando a memória alocada
    libera_lista(lista);
    
    return 0;
}
