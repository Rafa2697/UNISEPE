

/*Faça um algoritmo para inserção e para encontrar o maior item em uma árvore. Este algoritmo deve conter uma estrutura de dados, uma função para inserção dos dados e outra função para busca do maior dado em ordem, as funções devem ser recursivas.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *esquerdo, *direito;
    int altura;
}No;

//função que cria um novo nó x->valor a ser inserido no nó retorna o endereço do nó criado.
No* novoNo(int x){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = x;
        novo->esquerdo = NULL;
        novo->direito = NULL;
        novo->altura = 0;
    }
    else
        printf("\nErro ao alocar no em novoNo\n");
    return novo;
}

//retorna o maior entre dois valores
short maior(short a, short b){
    return(a > b)? a: b;
}

//Insere um novo nó na árvore raiz -> raiz da árvore x -> valor a ser inserido
No* inserir(No *raiz, int x){
    if(raiz == NULL){
        return novoNo(x);
    }else{
        if(x < raiz->valor){
            raiz->esquerdo = inserir(raiz->esquerdo, x);
        }else if(x > raiz->valor){
            raiz->direito = inserir(raiz->direito, x);
        }else{
            printf("\nInsercao nao realizada %d a existe\n", x);
        }
    }

}



void imprimir(No *raiz, int nivel){
    int i;
    if(raiz){
        imprimir(raiz->direito, nivel + 1);
        printf("\n\n");

        for(i = 0; i < nivel; i++)
            printf("\t");

        printf("%d", raiz->valor);
        imprimir(raiz->esquerdo, nivel + 1);
    }
}

int main(){

    int opcao, valor;
    No *raiz = NULL;

    do{
        printf("\n\n\t0 - Sair\n\t1 - Inserir\n\t2 - imprimir\n\t");
        scanf("%d", &opcao);

        switch(opcao){
        case 0:
            printf("Saindo!!!");
            break;
        case 1:
            printf("\tDigite o valor a ser inserido: ");
            scanf("%d", &valor);
            raiz = inserir(raiz, valor);
            break;
        case 2:
            imprimir(raiz, 1);
            break;
        default:
            printf("\nOcao invalida!!!\n");
        }

    }while(opcao != 0);

    return 0;
}