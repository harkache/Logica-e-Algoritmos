//usando for e matriz
#include <stdio.h>

int main (){
    int matriz[4][5] = {
        {4, 7, 5, 3, 2},
        {1, 2, 9, 0, 7},
        {3, 0, 7, 1, 2},
        {8, 1, 1, 0, 0}
    };

    //usando for para mostrar todos os números de uma linha

    int c;
    for(c = 0; c < 5; c++) printf("%d ", matriz[2][c]);

}