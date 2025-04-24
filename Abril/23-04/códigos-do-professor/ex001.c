//primeiro exemplo de Matriz
#include <stdio.h>

int main (){
    int matriz[2][3] = {
        {1, 2, 3},  //primeira linha da matriz (linha 0)
        {4, 5, 6}   //segunda linha da matriz  (linha 1)
    };

    printf("Elemento da segunda linha e terceira coluna: %d.\n", matriz[1][2]); 
}