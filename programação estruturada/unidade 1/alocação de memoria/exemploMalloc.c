#include <stdio.h> 
#include <stdlib.h>

/*
    %c - caractere
    %d - inteiro
    %f - real
    %s - cadeia de caracteres (string)
*/



void main(){
  
  int a, b;

  int *p;

  a = 1024;
  p = (int*) malloc (sizeof(int));
  *p = a * 10;
  b = *p;

  printf("a: %d\n", a);
  printf("b recebe a a meoria vinda do ponteiro na quantia de 10kb: %d\n", b);
  printf("p: %x valor %d\n", p, *p);

  return 0;

  
};