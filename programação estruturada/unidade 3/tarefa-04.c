#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da Árvore AVL
struct Node {
    int key;
    struct Node* left;
    struct Node* right;
    int height;
};

// Função para obter a altura de um nó
int getHeight(struct Node* node) {
    if (node == NULL)
    return 0;
    return node->height;
}

// Função para calcular o fator de balanceamento de um nó
int getBalanceFactor(struct Node* node) {
    if (node == NULL)
        return 0;
    return getHeight(node->left) - getHeight(node->right);
}

// Função para atualizar a altura de um nó
void updateHeight(struct Node* node) {
    int leftHeight = getHeight(node->left);
    int rightHeight = getHeight(node->right);
    node->height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// Função para realizar uma rotação simples à direita
struct Node* rotateRight(struct Node* node) {
    struct Node* newRoot = node->left;
    node->left = newRoot->right;
    newRoot->right = node;
    updateHeight(node);
    updateHeight(newRoot);
    return newRoot;
}

// Função para realizar uma rotação simples à esquerda
struct Node* rotateLeft(struct Node* node) {
    struct Node* newRoot = node->right;
    node->right = newRoot->left;
    newRoot->left = node;
    updateHeight(node);
    updateHeight(newRoot);
    return newRoot;
}

// Função para balancear a árvore AVL
struct Node* balanceTree(struct Node* node) {
    updateHeight(node);
    int balanceFactor = getBalanceFactor(node);

    if (balanceFactor > 1) {
        if (getBalanceFactor(node->left) < 0)
            node->left = rotateLeft(node->left);
        return rotateRight(node);
    }
    if (balanceFactor < -1) {
        if (getBalanceFactor(node->right) > 0)
            node->right = rotateRight(node->right);
        return rotateLeft(node);
    }
    return node;
}

// Função para inserir um novo nó na árvore AVL
struct Node* insertNode(struct Node* node, int key) {
    if (node == NULL) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->key = key;
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->height = 1;
        return newNode;
    }

    if (key < node->key)
        node->left = insertNode(node->left, key);
    else if (key > node->key)
        node->right = insertNode(node->right, key);
    else
        return node;  // chave já existe na árvore

    return balanceTree(node);
}

// Função para exibir a árvore AVL em ordem
void inorderTraversal(struct Node* node) {
    if (node != NULL) {
        inorderTraversal(node->left);
        printf("%d ", node->key);
        inorderTraversal(node->right);
    }
}

// Função pré-ordem recursiva
void preOrdem(struct Node* node) {
    if (node != NULL) {
        printf("%d ", node->key);  // Visita a raiz
        preOrdem(node->left);      // Percorre o nó da esquerda
        preOrdem(node->right);     // Percorre o nó da direita
    }
}

// Função para percorrer em pós-ordem
void postOrder(struct Node* node) {
    if (node == NULL) {
        return;
    }

    // Primeiro, visitamos o filho esquerdo
    postOrder(node->left);

    // Em seguida, visitamos o filho direito
    postOrder(node->right);

    // Por último, visitamos o nó raiz
    printf("%d ", node->key);
}

// Função principal
int main() {
    struct Node* root = NULL;
    
    root = insertNode(root, 1);
    root = insertNode(root, 2);
    root = insertNode(root, 3);
    
    root = insertNode(root, 4);
    
    root = insertNode(root, 5);
    root = insertNode(root, 6);
    root = insertNode(root, 7);

    printf("Arvore AVL em ordem: ");
    inorderTraversal(root);
    printf("\n");
    printf("Arvore AVL pre-ordem: ");
    preOrdem(root);
    printf("\n");
    printf("Arvore AVL pos-Ordem: ");
    postOrder(root);
    printf("\n");

    return 0;
}