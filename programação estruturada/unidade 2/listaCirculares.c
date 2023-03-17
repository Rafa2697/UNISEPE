#include <stdio.h>

#include <stdlib.h>

 

struct item{

    int dado;

    struct item *proximo;

};

 

int main(){

    struct item *listaCircular = NULL;

    struct item *itemTemp;

    int indice = 0;

    // Leitura dos dados

    do{

        itemTemp = (struct item*) calloc(sizeof(struct item), 1);

        itemTemp->dado = indice + 1;

        if(listaCircular == NULL){

            itemTemp->proximo = itemTemp;

        }else{

            itemTemp->proximo = listaCircular->proximo;

            listaCircular->proximo = itemTemp;

        }

        listaCircular = itemTemp;

        indice++;

    }while(indice < 4);

 

    // Impressão dos dados

    itemTemp = listaCircular;

    do{

        printf("%i\t", itemTemp->dado);

        itemTemp = itemTemp->proximo;

    }while(itemTemp !=  listaCircular);

 

    return 0;

}