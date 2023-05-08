#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura nó de uma árvore
struct no_arvore {
  int valor;
  struct no_arvore* esquerda;
  struct no_arvore* direita;
};

// Função para criar um novo nó com um determinado valor
struct no_arvore* criar_no(int valor) {
  // Aloca memória para o novo nó
  struct no_arvore* novo_no = (struct no_arvore*) malloc(sizeof(struct no_arvore));
  // Atribui o valor ao novo nó
  novo_no->valor = valor;
  // Inicializa os ponteiros para a esquerda e direita como NULL
  novo_no->esquerda = NULL;
  novo_no->direita = NULL;
  // Retorna o novo nó criado
  return novo_no;
}

// Função para inserir um novo nó em uma árvore
struct no_arvore* inserir(struct no_arvore* raiz, int valor) {
  // Se a raiz for NULL, cria um novo nó com o valor e retorna
  if (raiz == NULL) {
    return criar_no(valor);
  }
  // Se o valor for menor que o valor da raiz, insere na subárvore esquerda
  if (valor < raiz->valor) {
    raiz->esquerda = inserir(raiz->esquerda, valor);
  } 
  // Se o valor for maior ou igual ao valor da raiz, insere na subárvore direita
  else {
    raiz->direita = inserir(raiz->direita, valor);
  }
  // Retorna a raiz da árvore após a inserção
  return raiz;
}

// Função para buscar um valor em uma árvore
struct no_arvore* buscar(struct no_arvore* raiz, int valor) {
  // Se a raiz for NULL ou o valor da raiz for igual ao valor buscado, retorna a raiz
  if (raiz == NULL || raiz->valor == valor) {
    return raiz;
  }
  // Se o valor buscado for menor que o valor da raiz, busca na subárvore esquerda
  if (valor < raiz->valor) {
    return buscar(raiz->esquerda, valor);
  }
  // Se o valor buscado for maior que o valor da raiz, busca na subárvore direita
  else {
    return buscar(raiz->direita, valor);
  }
}

// Função para imprimir os valores de uma árvore em ordem
void inorder(struct no_arvore* raiz) {
  // Se a raiz não for NULL, imprime os valores em ordem
  if (raiz != NULL) {
    inorder(raiz->esquerda); // Imprime os valores da subárvore esquerda
    printf("%d ", raiz->valor); // Imprime o valor da raiz
    inorder(raiz->direita); // Imprime os valores da subárvore direita
  }
}

int main() {
  // Cria a raiz da árvore como NULL
  struct no_arvore* raiz = NULL;
  // Insere alguns valores na árvore
  raiz = inserir(raiz, 5);
  raiz = inserir(raiz, 3);
  raiz = inserir(raiz, 7);
  raiz = inserir(raiz, 1);
  raiz = inserir(raiz, 4);
  raiz = inserir(raiz, 6);
  raiz = inserir(raiz, 9);
  
  //Imprime a árvore em ordem
  printf("Arvore em ordem: ");
  inorder(raiz); //função que exibe os dados passando o parametro que ela pede
  printf("\n"); 
  
  struct no_arvore* no_buscado = buscar(raiz, 3);
  if (no_buscado != NULL) {
      printf("O valor %d foi encontrado na árvore!\n", no_buscado->valor);
  } else {
      printf("O valor não foi encontrado na árvore.\n");
  }
    return 0;
}