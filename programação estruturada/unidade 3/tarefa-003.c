#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de um nó da árvore
struct No {
    int valor;
    struct No* esquerda;
    struct No* direita;
};

// Função para criar um novo nó
struct No* criarNo(int valor) {
    struct No* no = (struct No*)malloc(sizeof(struct No));
    no->valor = valor;
    no->esquerda = NULL;
    no->direita = NULL;
    return no;
}

// Função para inserir um valor na árvore
struct No* inserir(struct No* raiz, int valor) {
    if (raiz == NULL)
        return criarNo(valor);
    if (valor < raiz->valor)
        raiz->esquerda = inserir(raiz->esquerda, valor);
    else if (valor > raiz->valor)
        raiz->direita = inserir(raiz->direita, valor);
    return raiz;
}

// Função para encontrar o maior item em ordem
int encontrarMaiorItem(struct No* raiz) {
    if (raiz == NULL)
        return -1; // Valor inválido para indicar que a árvore está vazia
    if (raiz->direita == NULL)
        return raiz->valor; // Se não houver nó à direita, este é o maior valor
    return encontrarMaiorItem(raiz->direita);
}

// Função principal
int main() {
    // Exemplo de uso
    struct No* raiz = NULL;
    raiz = inserir(raiz, 50);
    inserir(raiz, 30);
    inserir(raiz, 20);
    inserir(raiz, 40);
    inserir(raiz, 70);
    inserir(raiz, 60);
    inserir(raiz, 80);

    int maiorItem = encontrarMaiorItem(raiz);
    if (maiorItem != -1)
        printf("Maior item em ordem: %d\n", maiorItem);
    else
        printf("A árvore está vazia.\n");

    return 0;
}