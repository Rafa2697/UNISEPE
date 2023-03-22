#include <stdio.h>

int main() {
    float salario, aumento, novo_sal;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario > 0 && salario < 400) {
        aumento = salario * 15/100;
        printf("seu aumento %.2f\n", aumento);
    }else if(salario > 400.01 && salario < 700.01){
        aumento = salario * 12/100;
        printf("seu aumento %.2f\n", aumento);
    }else if(salario > 700.01 && salario < 1000.01) {
        aumento = salario * 10/100;
        printf("seu aumento %.2f\n", aumento);
    }else if (salario > 1000.01 && salario < 1800.01){
        aumento = salario * 7/100;
        printf("seu aumento %.2f\n", aumento);
    }else if (salario > 1800.01 && salario < 2500.01){
        aumento = salario * 4/100;
        printf("seu aumento %.2f\n", aumento);
    }else{
        printf("Digite salario entre 400 e 2500!");
    }
    
    
    

    

    return 0;
}