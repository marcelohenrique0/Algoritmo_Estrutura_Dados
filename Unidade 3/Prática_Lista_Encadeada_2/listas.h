#ifndef LISTAS_H
#define LISTAS_H

// Definição da estrutura para lista encadeada
typedef struct lista Lista;

// Definição da estrutura para lista duplamente encadeada
typedef struct listad Listad;

// Funções para lista encadeada

Lista *list_cria(void);
Lista *list_adc(Lista *l, int i);
void list_imprime(Lista *l);
int list_vazia(Lista *l);
Lista *list_busca(Lista *l, int v);
Lista *list_retira(Lista *l, int v);
void list_libera(Lista *l);
void listc_imprime(Lista *l);
Lista *listc_adc(Lista *l, int i);
Lista *listc_busca(Lista *l, int v);
Lista *listc_retira(Lista *l, int v);

// Funções para lista duplamente encadeada

Listad *listd_cria(void);
void listd_libera(Listad *l);
Listad *listd_adc(Listad *l, int v);
Listad *listd_busca(Listad *l, int v);
Listad *listd_retira(Listad *l, int v);
int listd_vazia(Listad *l);
void listd_imprime(Listad *l);

// Funções para lista duplamente encadeada circular

Listad *listdc_adc(Listad *l, int v);
Listad *listdc_busca(Listad *l, int v);
Listad *listdc_retira(Listad *l, int v);
int listdc_vazia(Listad *l);
void listdc_imprime(Listad *l);

#endif /* LISTAS_H */
