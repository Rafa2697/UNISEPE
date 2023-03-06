#include <stdio.h> 

/*
    %c - caractere
    %d - inteiro
    %f - real
    %s - cadeia de caracteres (string)
*/
int * meuPonteiro1;
int * meuPonteiro2;
int * meuPonteiro3;
int valor;

void main(){
    valor = 123;
    meuPonteiro1 = &valor;
    meuPonteiro2 = meuPonteiro1;

    printf("%p\n", meuPonteiro2);
    printf("%i\n", *meuPonteiro2);
    
}