#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cliente
{
    char nome[50];
    struct Cliente *prox;
};

int main(){
    struct Cliente *inicio = NULL;
    struct Cliente *fim = NULL;
    struct Cliente *novo_cliente;

    novo_cliente = (struct Cliente *) malloc(sizeof(struct Cliente));
    
}

