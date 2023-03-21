#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[3][3]={1,3,9,6,-23,54,12,37,16};
    int i, j, cont = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(mat[i][j] % 2 != 0)
            cont++;
        }
    }
    printf("Contador = %d", cont);
    return 0;
}