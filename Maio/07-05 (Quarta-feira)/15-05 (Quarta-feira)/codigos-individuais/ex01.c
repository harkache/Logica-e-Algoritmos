/*
1) Exibir os 7 primeiros termos de uma PA em que A1 = 19 e R = -3
2) Somar os 12 primeiros termos de uma PA em que A1 = 4 E R = 5
*/
#include <stdio.h>
#include <stdlib.h>

float PA (float A, float R, int N){ //função PA (apenas nome)
    
    float resposta = A; 
    for (int i = 2; i <= N; i++) resposta = resposta + R;
    return resposta;

}

int main (){
// 1)

    for (int i = 1; i <= 7; i++) {
        printf("%.0f\t", PA (19, -3, i));
    }

// 2)

    float soma = 0;
    for (int i = 1; i <= 12; i++) soma = soma + PA (4, 5, i);
    printf("\n\n%.0f", soma); 

}