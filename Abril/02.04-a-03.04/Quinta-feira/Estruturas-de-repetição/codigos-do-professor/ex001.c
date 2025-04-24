//Atividade para descobrir o valor de PI
#include <stdio.h>
#include <stdlib.h>

int main (){
    system ("cls");

    float Soma = 0.0;
    float Denominador = 1.0;
    float Sinal = 1.0;

    int N = 1; //Serve para cortar termos do resultado final

    do {
        Soma = Soma + Sinal * 1.0 / Denominador;
        Denominador = Denominador + 2.0;
        Sinal = -1.0 * Sinal;
        N++;
    } while (N <= 200);

    float PI = 4.0 * Soma;
    printf("O valor de PI é %f .\n", PI);
    
    return 0;
}
