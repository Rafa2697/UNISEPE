

#include <stdio.h> //inclui a biblioteca padrão de entrada e saída de dados em C

int fatorial(m){    // Define uma função chamada fatorial que recebe um parâmetro inteiro chamda m
    int fat = 1;    // declara uma variável inteira chamada fat e inicializa com o valor 1
    for(int i = 1; i<=m; i++){  //Inicia um laço for de 1 até o valor de m, incrementando i a cada interação
        fat = fat * i;
    }
    return fat;
}

int main(){ //função principal do programa.
    int fat, m; //Declara duas variáveis inteiras, fat e m.
    
    printf("informe um numero inteiro:");   //Imprime a mensagem "informe um numero inteiro "
    scanf("%d",&m); //Lê um número inteiro digitado pelo usuário e armazena em m
    
    fat = fatorial(m);  //Chaa a função fatorial para calcular o fatorial do número informado e armazena em fat
    printf("%d! = %d",m,fat);   //imprime o valor de m seguida de "!" e o resultado do fatorial calculado em fat
    
    return 0;   //Retorna 0 para indicar que o programa foi executado em sucesso. 
}