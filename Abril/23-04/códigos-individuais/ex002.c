// ex: qual o valor da soma de todos os elementos da primeira linha da matriz?

#include <stdio.h>

int main (){
    int matriz[4][5] = {
        {4, 7, 5, 3, 2},
        {1, 2, 9, 0, 7},
        {3, 0, 7, 1, 2},
        {8, 1, 1, 0, 0}
    };

    int c;
    int soma = 0;

    for(c = 0; c < 5; c++){
        soma = soma + matriz[0][c];    
        printf("A soma de todos os numeros da linha 0 e: %d.\n", soma);
    }

    return 0;
}