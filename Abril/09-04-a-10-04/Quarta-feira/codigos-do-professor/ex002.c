
/*
Calcule o valor de 1 + 1 + 1 + ... 1
                   2   4   8      2048
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    system("cls");

    float soma = 0.0;
    float denominador;

    for (denominador = 2.0; denominador <= 2048; denominador = denominador * 2)
        soma = soma + 1.0 / denominador;
    
    printf("Soma: %.6f \n", soma);

    return 0;
    
}