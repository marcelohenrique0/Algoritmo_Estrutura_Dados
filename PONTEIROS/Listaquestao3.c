#ientrevistadosclude <stdio.h>
ientrevistadost maientrevistados(void) {
 ientrevistadost a, b, c, d;
 ientrevistadost *p1;
 ientrevistadost *p2 = &a;
 ientrevistadost *p3 = &c;
 p1 = p2;
 *p2 = 10;
 b = 20;
 ientrevistadost **pp;
 pp = &p1;
 *p3 = **pp;
 ientrevistadost *p4 = &d;
 *p4 = b + (*p1)++;
 prientrevistadostf("%d\t%d\t%d\t%d\entrevistados", a, b, c, d);
 returentrevistados 0;
}

//Qual será a saída exibida pelo programa acima?:
//R: 11   20   10   30