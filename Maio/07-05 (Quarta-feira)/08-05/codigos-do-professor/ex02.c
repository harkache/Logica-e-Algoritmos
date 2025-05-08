#include <stdio.h>
#include <stdlib.h>

void modificarValor (int *x){ //passagem por valor: "a" é copiado na função, no lugar de "x"
    *x = *x + 10;
}

int main (){ 
    
    int a = 5;

    modificarValor(&a);

    printf("Valor de A: %d\n", a); //

    return 0;
}