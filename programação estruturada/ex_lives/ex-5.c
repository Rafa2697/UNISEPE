#include <stdio.h>
#include <stdlib.h>

//definindo o tamanho máximo da lista
#define NUMMODES 12


//criando um registro/estrutura para nós da lista
struct no {
    int quantRacao;
    char nomeMes[30];
};


//criando um array de nós para armazenar a lista
struct no nos[NUMMODES];

int main(){
    //incializando o contador de nós
    int qtdeNos = 0;

    //variavel para armazenar a opção de nós
    char op;

    //loop para inserção de elementos da lista
    do{
        printf("Você deseja inserir um novo elemento/e (S/N)\n")
        scanf("%c", &op);

        
    }

}