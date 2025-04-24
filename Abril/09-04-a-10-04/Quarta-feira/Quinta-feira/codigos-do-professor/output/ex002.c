#include <stdio.h>
int mais (){

    int numeros[5] = {2, 3, 5, 8, 13}; //vetor (array) de inteiros com 5 posições
    int i;

    for(i = 0; i <= 4; i++)
        printf("%d \t %d \n", numeros[1], &numeros[i]);
    
    /*
    Observação:
    &numeros[1]: ... endereço de memória da variável numeros[1].
    %p: mostra o resultado como hexidecimal
    */

    return 0;
}
