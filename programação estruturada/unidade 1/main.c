
#include <stdio.h> //Inclui a biblioteca padrão de entrada e saída de dados em c


//fatorial de um numero

int main(){ //Define a função principal do programa
    int fat = 1, m; //declara duas variaveis inteiras, fat e m, inicializa fat com 1.
    printf("Informe um numero inteiro:");// imprime a mensagem "informe um numero inteiro"
    scanf("%d", &m);    //lê um numero inteiro digitado pelo usuario e armazena em m
    
    for(int i = 1; i<=m; i++){  //inicia um laço for de 1 até o valor de m, incrementando i a cada interação 
        fat = fat * i;  // multiplica fat peo valor de i e armazena o resultado em fat
    }
    
    printf("%d! = %d",m,fat); // imprime o valor de m seguido  de "!" e o resultado do fatorial calculado em fat
}