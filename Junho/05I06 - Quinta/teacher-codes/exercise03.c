#include <stdio.h>
#include <stdlib.h>

int main () {

    int A = 10;
    int * ptr = &A; // Inicializa com ptr com o endereço de memória de A.

    system("cls");
    printf("Valor da variável A: %d \n", A);
    printf("O endereço da variável A: %d \n", &A);
    printf("O endereço da variável A: %d\n", ptr);
    printf("O valor no endereço apontado por %d \n", * ptr); //Mostra o que está guardado dentro do endereço de memória.

}