#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    float salario, aumento, novo_sal;
    int numero;
    
    printf("Digite o salario: \n");
    scanf("%f", &salario);

    printf("Digite seu numero de funcionario: ");
    scanf("%d", &numero);


    if (salario > 0 && salario < 400) {
        aumento = salario * 15/100;
        printf("Seu numero e %d e seu salario atual e de %.2f\n", numero, salario);
        printf("seu aumento 15%% %.2f\n", aumento);
        printf("Novo salario %.2f \n", salario + aumento);

    FILE *fp;

   fp = fopen("tarefa3.txt", "w");
   if(!fp){
    printf("Erro na abertura do arquivo");
    exit(0);
   }
   fprintf(fp,"Seu numero é %d e seu salario atual é: %.2f\n",numero, salario);
   fprintf(fp,"Seu aumento foi de 15%%: %.2f\n", aumento);
   fprintf(fp,"Novo salario %.2f\n", salario + aumento);
   fclose(fp);

    }else if(salario > 400.01 && salario < 700.01){
        aumento = salario * 12/100;
          printf("Seu numero e %d e seu salario atual e de %.2f\n",numero, salario);
        printf("seu aumento 12%% %.2f\n", aumento);
        printf("Novo salario %.2f \n", salario + aumento);

        FILE *fp;

   fp = fopen("tarefa3.txt", "w");
   if(!fp){
    printf("Erro na abertura do arquivo");
    exit(0);
   }
   fprintf(fp,"Seu numero é %d e seu salario atual é: %.2f\n",numero, salario);
   fprintf(fp,"Seu aumento foi de 12%%: %.2f\n", aumento);
   fprintf(fp,"Novo salario %.2f\n", salario + aumento);
   fclose(fp);

    }else if(salario > 700.01 && salario < 1000.01) {
        aumento = salario * 10/100;
          printf("Seu numero e %d e seu salario atual e de %.2f\n",numero, salario);
        printf("seu aumento 10%% %.2f\n", aumento);
        printf("Novo salario %.2f \n", salario + aumento);

        FILE *fp;

   fp = fopen("tarefa3.txt", "w");
   if(!fp){
    printf("Erro na abertura do arquivo");
    exit(0);
   }
   fprintf(fp,"Seu numero é %d e seu salario atual é: %.2f\n",numero, salario);
   fprintf(fp,"Seu aumento foi de 10%%: %.2f\n", aumento);
   fprintf(fp,"Novo salario %.2f\n", salario + aumento);
   fclose(fp);

    }else if (salario > 1000.01 && salario < 1800.01){
        aumento = salario * 7/100;
          printf("Seu numero e %d e seu salario atual e de %.2f\n",numero, salario);
        printf("seu aumento 7%% %.2f\n", aumento);
        printf("Novo salario %.2f \n");

        FILE *fp;

   fp = fopen("tarefa3.txt", "w");
   if(!fp){
    printf("Erro na abertura do arquivo");
    exit(0);
   }
   fprintf(fp,"Seu numero é %d e seu salario atual é: %.2f\n",numero, salario);
   fprintf(fp,"Seu aumento foi de 7%%: %.2f\n", aumento);
   fprintf(fp,"Novo salario %.2f\n", salario + aumento);
   fclose(fp);

    }else if (salario > 1800.01 && salario < 2500.01){
        aumento = salario * 4/100;
          printf("Seu numero e %d e seu salario atual e de %.2f\n",numero, salario);
        printf("seu aumento 4%% %.2f\n", aumento);
        printf("Novo salario %.2f \n", salario + aumento);

        FILE *fp;

   fp = fopen("tarefa3.txt", "w");
   if(!fp){
    printf("Erro na abertura do arquivo");
    exit(0);
   }
   fprintf(fp,"Seu numero é %d e seu salario atual é: %.2f\n",numero, salario);
   fprintf(fp,"Seu aumento foi de 4%%: %.2f\n", aumento);
   fprintf(fp,"Novo salario %.2f\n", salario + aumento);
   fclose(fp);

    }else{
        printf("Digite salario entre 400 e 2500!");
    }


   

   return 0;
}


