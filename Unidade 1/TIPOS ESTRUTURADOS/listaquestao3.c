#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float base;
    float altura;
} Ret;

typedef struct {
    float raio;
} Circ;

Circ* circ_interno(Ret* r);
Ret* ret_circunscrito(Circ* c, float h);

int main() {
    Ret retangulo;

    printf("Digite a base do retangulo: ");
    scanf("%f", &retangulo.base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &retangulo.altura);

    Circ* circ_int = circ_interno(&retangulo);

    printf("\nCirculo interno:\n");
    printf("Raio: %.2f\n", circ_int->raio);

    free(circ_int);

    Circ circulo;

    printf("\nDigite o raio do circulo: ");
    scanf("%f", &circulo.raio);

    float altura_circunscrito;
    do{
     printf("Digite a altura desejada para o retangulo circunscrito (menor que o diametro do circulo): ");
    scanf("%f", &altura_circunscrito);
    
    }while ((altura_circunscrito) > 2 * circulo.raio);

    Ret* ret_circ = ret_circunscrito(&circulo, altura_circunscrito);

    printf("\nRetangulo circunscrito:\n");
    printf("Base: %.2f\n", ret_circ->base);
    printf("Altura: %.2f\n", ret_circ->altura);

    free(ret_circ);

    return 0;
}

Circ* circ_interno(Ret* r) {
    Circ* circ = (Circ*)malloc(sizeof(Circ));

    circ->raio = fmin(r->base, r->altura) / 2;

    return circ;
}

Ret* ret_circunscrito(Circ* c, float h) {
    Ret* ret = (Ret*)malloc(sizeof(Ret));

    float diametro = 2 * c->raio;

    ret->base = diametro;
    ret->altura = h;

    return ret;
}