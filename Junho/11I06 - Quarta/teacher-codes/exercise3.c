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
    int N = 100000000000000;
    Triangulo * V = (Triangulo *) malloc(N * sizeof(Triangulo));

    printf("Tentando alocar %d bytes!\n", N * sizeof(Triangulo));

    if (V == NULL) { //NULL é usado para mostrar quando um ponteiro não aponta para nenhum endereço de memória válido.
        printf("ERRO: Falha na alocacao de memoria!");
        exit(1);
    }
    
    printf("A memoria foi alocada com sucesso!");
}