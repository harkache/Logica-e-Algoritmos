#include <stdio.h>
#include <stdlib.h>

typedef struct {
        float a;
        float b;
        float c;
        float perimetro;
        float area;
        char nome[3];       
    } Triangulo;

int main (){

    int * V1 = (int *)malloc(100 * sizeof(int)); // Reserva 100 * 4 = 400 bytes
    float * V2 = (float *)malloc(600 * sizeof(float)); // Reserva 600 * 4 = 2400 bytes
    Triangulo * V3 = (Triangulo *)malloc(1000 * sizeof(Triangulo));

    /*
    Malloc é um comando para alocar na memória enquanto está ocorrendo a execução.
    Nos casos acima, a conta é 100/600 multiplicado pelo valor de int/float (ambos por 4).V2
    Esse código (float *) significa para dividir a conta em 4, o valor de float (4 bytes).
    */

   V1[90] = 10;
   V2[2] = 2.5;
   V3[9].a = 2.0;
   V3[9].b = 2.0;
   V3[9].c = 3.0;

    return 0;
}