#include <stdio.h>

//algoritimo 1: exemplo de código sem uso de registro

/*
void main(){
    int codigo;
    char nome[25];
    float valor;
    int quantidade;

    printf('informe o código: ');
    scanf("%s", &codigo);

    printf("informe um nome: ");
    scanf("%s", &nome);

    printf("Informe o valor: ");
    scanf("%s", &valor);

    printf("Informe a quantidade: ");
    scanf("%d", &quantidade);
    
}
*/

/*
    %c - caractere
    %d - inteiro
    %f - real
    %s - cadeia de caracteres (string)
*/
 struct Venda {
        int codigo; //tipo int, armazena numeros inteiro
        char nome[25];//tipo char armazena caracteres, nesse caso aceita até 25 caracteres
        float valor; // tipo float, armazena numeros quebrados
        int quantidade;
    };

//algoritmo 2: Exemplo de codigo com o uso de registro 
void efetuarVenda (struct Venda produto){ //struct venda foi passado como parãmetro para a função efetuarVenda().
       // "\n" serve para pular uma linha 
    printf("Codigo: %d\n", produto.codigo);
    printf("Nome: %s\n", produto.nome);
    printf("valor: %f\n", produto.valor);
    printf("quatidade: %d\n", produto.quantidade);
}

void main(){
  
    struct Venda venda;
       // existe diferença entre letras maiusculas de minusculas

    printf("Informe o codigo "); //solicita ao usuário que insira alguma informação
    scanf("%d", &venda.codigo); //lê a entrada da informação digitada pelo usuario

    printf("informe um nome: ");
    scanf("%s", &venda.nome);

    printf("Informe o valor: ");
    scanf("%f", &venda.valor);

    printf("Informe a quantidade: ");
    scanf("%d", &venda.quantidade);
    
 

    efetuarVenda(venda);

}





