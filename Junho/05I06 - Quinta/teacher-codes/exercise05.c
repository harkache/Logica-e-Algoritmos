#include <stdio.h>
#include <stdlib.h>

int main () {

    int A[] = {10, 20, 30}; //A é um vetor, A [0], A [1], A [2].
    int * P = A;

    system("cls");
    printf("%d \t %d \n", A [0], * P); // O ponteiro está alocando o vetor A, e mostrando o primeiro valor do vetor A [0].
    printf("%d \t %d \n", A [1], &A[1]); // Mostra o valor alocado no segundo espaço e o endereço de memória do mesmo.
    printf("%d \t %d \n", A [2], &A[2]); 

}