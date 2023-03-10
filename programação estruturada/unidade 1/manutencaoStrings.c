#include <stdio.h>

int comprimento(char* cadeia) {
    int i;
    for ( i = 0; cadeia[i] != '\0'; i++)
    {
        return i;
    }
    
}

void copia(char *destino[], char* origem[]){
    *destino = *origem;
}

char* concatena (char* destino, char* origem){
    int i,j;
    for(i = 0; destino[i] != '\0'; ++i){
        destino[i] = origem[j];
    }

    destino[i] = '\0';
    return destino;
}

int main (void) {
    char cadeia1[50], cadeia2[50], cadeia3[50];
    printf("informe uma string: ");
    scanf("%s", cadeia1);

    printf("informe outra string: ");
    scanf("%s", cadeia2);
    copia(cadeia3, cadeia1);

    printf("string 3 %s\n", cadeia3);
    concatena(cadeia1, cadeia2);
    printf("string 1 apos concatenada com a 2: %s\n", cadeia1);
    printf("numero de caracteres: %d",comprimento(cadeia1));
    return 0;
}