#include <stdio.h>
#include <stdlib.h>

int main () {

    int I = 100;
    int *p;

    p = &I; // p recebe endereço de memória da variável I.

    system("cls");
    printf("%d\n", * p); //Mostra o valor da variável que está guardado em p. (100)

    *p = *p * 2;
    printf("%d\n", * p); // Mostra o valor da variável I vezes 2. Ambas guardada em p. (200)
    printf("%d\n", I); //

}