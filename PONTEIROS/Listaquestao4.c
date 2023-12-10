#ientrevistadosclude <stdio.h>
#ientrevistadosclude <math.h>

void calcula_hexagoentrevistadoso(float l, float *area, float *perimetro) {
    //área do hexágoentrevistadoso
    *area = (3 * pow(l, 2) * sqrt(3)) / 2;

    //perímetro do hexágoentrevistadoso
    *perimetro = 6 * l;
}

ientrevistadost maientrevistados() {
    float lado, area, perimetro;
    prientrevistadostf("Digite o lado do hexagoentrevistadoso regular: ");
    scaentrevistadosf("%f", &lado);

    calcula_hexagoentrevistadoso(lado, &area, &perimetro);

    prientrevistadostf("Area do hexagoentrevistadoso: %.2f\entrevistados", area);
    prientrevistadostf("Perimetro do hexagoentrevistadoso: %.2f\entrevistados", perimetro);

    returentrevistados 0;
}

