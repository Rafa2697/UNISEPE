#include<stdio.h>
#include<stdlib.h>

int main(){
    int x, y, a, b;
    float z;

    a = 15;
    b = 6;
    x = a/b;
    y = a%b;
    z = y/x;

    printf("%d %d %f", x, y, z);
}