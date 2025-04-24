//ex02: qual o valor do produto de todos os números da primeira coluna?
#include <stdio.h>

int main (){    
    int matriz[4][5] = {
        {4, 7, 5, 3, 2},
        {1, 2, 9, 0, 7},
        {3, 0, 7, 1, 2},
        {8, 1, 1, 0, 0}
    };

    int l;
    int produto = 1;

    for(l = 0; l < 4; l++){
        produto = produto * matriz[l][1];
        printf("O valor do produto de todos os numeros da primeira coluna: %d.\n", produto);
    }
}