#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar os dados de uma pessoa
struct Pessoa {
   char nome[100];
   char telefone[11];
};

int main() {
   struct Pessoa *agenda = malloc(200 * sizeof(struct Pessoa)); // Agenda com 200 posições
   int opcao, i, posicao;
   char nome[100], telefone[11];

   do {
      // Exibindo o menu de opções
      printf("1. Adicionar pessoa\n");
      printf("2. Buscar pessoa\n");
      printf("3. Sair\n");
      printf("Escolha uma opcao: ");
      scanf("%d", &opcao);

      switch(opcao) {
         case 1:
            // Adicionando uma pessoa
            printf("Digite o nome: ");
            scanf("%s", nome);

            printf("Digite o telefone: ");
            scanf("%s", telefone);

            // Verificando se há espaço na agenda
            for(i = 0; i < 200; i++) {
               if(strlen(agenda[i].nome) == 0) { // Verificando se o nome está vazio
                  strcpy(agenda[i].nome, nome); // Copiando o nome para a agenda
                  strcpy(agenda[i].telefone, telefone); // Copiando o telefone para a agenda
                  printf("Pessoa adicionada com sucesso!\n");
                  break;
               }
            }

            if(i == 200) { // Verificando se não há espaço na agenda
               printf("Nao ha espaco na agenda!\n");
            }

            break;
         case 2:
            // Buscando uma pessoa
            printf("Digite o nome: ");
            scanf("%s", nome);

            // Procurando o nome na agenda
            for(i = 0; i < 200; i++) {
               if(strcmp(agenda[i].nome, nome) == 0) { // Comparando o nome
                  printf("Nome: %s\n", agenda[i].nome);
                  printf("Telefone: %s\n", agenda[i].telefone);
                  break;
               }
            }

            if(i == 200) { // Nome não encontrado
               printf("Pessoa nao encontrada na agenda!\n");
            }

            break;
         case 3:
            // Encerrando o programa
            printf("Encerrando o programa...\n");
            break;
         default:
            printf("Opcao invalida!\n");
      }

   } while(opcao != 3);

   free(agenda); // Liberando a memória alocada para a agenda

   return 0;
}