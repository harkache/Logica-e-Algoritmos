#include <stdio.h>
#include <stdlib.h>

int main () {

    int X = 10;
    int * ptr; // Inicializando, primeiramente, o ponteiro * ptr!

    ptr = &X; // Armazenar, em ptr, o endereço de memória da variável X.

    printf(" %d\t %p\t ", ptr, ptr); // Será mostrado o endereço de X.

    /*
    %x mostra o valor, na forma hexadecimal.
    %p mostra o valor, na forma hexadecimal, porém, com 8 dígitos (maíusculos).
    %d mostra o valor de um inteiro.
    */
}