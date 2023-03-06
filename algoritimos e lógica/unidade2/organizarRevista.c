#include<stdio.h>
#include<stdlib.h>

int main(){
    int genero;

    printf("Informe o genero da revista: ");
    scanf("%d", &genero);
    if (genero == 1) {
        printf("Revista do Genero fantasia - Estante 1");
    }
    if (genero == 2)
    {
        printf("Revista do genero Terror - estante 2");
    }
    if (genero == 3)
    {
        printf("Revista do genero Comedia - estante 3");
    }
    if (genero == 4)
    {
        printf("Revista do genero romance - estante 4");
    }
    if (genero == 5)
    {
        printf("revista do genero super-herois - estante 5");
    }
    else{
        printf("informe numero de 1 a 5");
    }
    
    
    
    
}