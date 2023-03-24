#include <stdio.h>

int main(){
    FILE *fp;

    char produto[10] = "brinco";
    int i;
    fp = fopen("arq.txt","w");

    if(!fp){
        printf("Erro na abertura do arquivo\n");
        exit(0);
    }

    fwrite(produto,1,strlen(produto),fp);

    fclose(fp);
}