#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){
    char palavra1[120]="martelo";
    char palavra2[20]="machado";
    char palavra3[40];
    int i = 0, j = 0;


for(i = 0; i < strlen(palavra1); i++){
    palavra3[j] = palavra1[i];
    j++;
    palavra3[j] = palavra2[i];
    j++;
}
palavra3[j] = '\0';
puts(palavra3);
return 0;

}