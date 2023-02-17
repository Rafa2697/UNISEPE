
#include <stdio.h>

int fatorial(m){
    int fat = 1;
    for (int i = 1; i<=m; i++){
        fat = fat * i;
    }
    return fat;
}

int main(){
    int fat, m1, m2, m3;

    printf("Informe um numero inteiro: ");
    scanf("%d", &m1);

    printf("informe o segudno numero inteiro:");
    scanf("%d", &m2);

    printf("informe o terceiro numero inteiro:");
    scanf("%d", &m3);

    fat = fatorial(m1) * fatorial(m2) * fatorial(m3);
    printf("Soma dos fatoriais = %d", fat);

    return 0;

}

