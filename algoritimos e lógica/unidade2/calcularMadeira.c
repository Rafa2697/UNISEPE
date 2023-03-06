#include<stdio.h>
#include<stdlib.h>


int main(){
    float Tm, Ac=1.2, a, l, c;

    printf("Informe o valor da altura: ");
    scanf("%f\n",&a);
    printf("Informe o valor da largura: ");
    scanf("%f\n",&l);
    printf("Informe o valor do comprimento: ");
    scanf("%f\n", &c);

    Tm = 2*Ac*((a*l) + (l*c) + (a*c));

    printf("a quantidade de madeira e: %f", Tm);
}