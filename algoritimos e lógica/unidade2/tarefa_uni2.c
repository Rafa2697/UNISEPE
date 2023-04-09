#include <stdio.h>
#include <stdlib.h>

int codigo_insc, idade, quant_pessoas, quant_masc, quant_fem, quant_outros;
char nome, sexo;



int main(){
    

    printf("Informe o numero de pessoas a serem registrada: \n");
    scanf("%d",quant_pessoas);
    
    for (int i = 0; i < quant_pessoas; i++){
        printf("informe o código de inscrição: \n");
        scanf("%d",codigo_insc);

        printf("Informe o nome do inscrito: \n");
        scanf("%c",nome);

        printf("Genero (M, F ou O): \n");
        scanf("%c", sexo);

        printf("informe a idade: \n");
        scanf("%d", idade);

        if (sexo == 'M')
        {
            quant_masc++;
        }else if(sexo == 'F'){
            quant_fem++;
        }else if(sexo == 'O'){
            quant_outros++;
        }else{
            printf("Digite somente (M, F ou O)");
        }
        
        
    }
    

  


   
    


}