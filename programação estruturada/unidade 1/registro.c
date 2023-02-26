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

//algoritmo 2: Exemplo de codigo com o uso de registro 


void main(){
    struct venda
    {
        int codigo;
        char nome[25];
        float valor;
        int quantidade;
    };

    struct  venda venda;

    printf("Informe o codigo ");
    scanf("%s", &venda.codigo);

    printf("informe um nome: ");
    scanf("%s", &venda.nome);

    printf("Informe o valor: ");
    scanf("%s",&venda.valor);

    printf("Informe a quantidade: ");
    scanf("%d",&venda.quantidade);
    
    
    
}


