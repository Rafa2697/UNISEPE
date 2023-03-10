#include <stdio.h>

int soma(int a, int b) { // Função para realizar a soma
return a + b;
}

int subtracao(int a, int b) {
return a - b;
}

int main() {
int num1, num2, resultado;

printf("Digite o primeiro número: ");
scanf("%d", &num1);

printf("Digite o segundo número: ");
scanf("%d", &num2);

resultado = soma(num1, num2); // Chamada da função soma

printf("O resultado da soma é: %d", resultado);

return 0;
}