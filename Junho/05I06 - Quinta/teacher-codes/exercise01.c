#include <stdio.h>
#include <stdlib.h>

int main () {

    int X = 10;

    printf("%d\n", X); //Será mostrado o valor de X: 10.

    printf("%d\n", &X); // Isso mostrará o endereço de memória de X.

    /*
    Ou seja, &X mostra o endereço de memória da variável int X;
    Mas se colocando sem o & (E comercial), o que será mostrado será apenas o valor da variável!
    */

   printf("%x\n", &X); // %x mostra o valor, na forma hexadecimal.

   printf("%p\n", &X); // %p mostra o valor, na forma hexadecimal, porém, com 8 dígitos (maíusculos).

   scanf("%d", &X); //Este scanf lê o valor de X (10) e guarda no endereço de memória.
}