#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cliente {
    char nome[50];
    struct Cliente *prox;
};

struct FilaEspera {
    struct Cliente *inicio;
    struct Cliente *fim;
};

void inserir(struct FilaEspera *fila) {
    struct Cliente *novo_cliente = (struct Cliente*) malloc(sizeof(struct Cliente));

    printf("Digite o nome do cliente: ");
    fgets(novo_cliente->nome, 50, stdin);

    novo_cliente->prox = NULL;

    if (fila->inicio == NULL) {
        fila->inicio = novo_cliente;
    } else {
        fila->fim->prox = novo_cliente;
    }

    fila->fim = novo_cliente;

    printf("Cliente cadastrado na fila de espera com sucesso!\n");
}

void remover(struct FilaEspera *fila) {
    if (fila->inicio == NULL) {
        printf("A fila de espera está vazia!\n");
        return;
    }

    struct Cliente *removido = fila->inicio;
    fila->inicio = fila->inicio->prox;

    printf("Cliente %s atendido com sucesso!\n", removido->nome);

    free(removido);
}

void exibir(struct FilaEspera *fila) {
    if (fila->inicio == NULL) {
        printf("A fila de espera está vazia!\n");
        return;
    }

    printf("Fila de espera:\n");

    struct Cliente *cliente_atual = fila->inicio;

    while (cliente_atual != NULL) {
        printf("- %s", cliente_atual->nome);
        cliente_atual = cliente_atual->prox;
    }
}

int main() {
    struct FilaEspera fila;
    fila.inicio = NULL;
    fila.fim = NULL;

    int opcao;

    do {
        printf("Escolha uma opcao:\n");
        printf("1 - Cadastrar cliente na fila de espera\n");
        printf("2 - Atender cliente mais antigo\n");
        printf("3 - Exibir fila de espera\n");
        printf("4 - Sair\n");

        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do teclado

        switch (opcao) {
            case 1:
                inserir(&fila);
                break;
            case 2:
                remover(&fila);
                break;
            case 3:
                exibir(&fila);
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}