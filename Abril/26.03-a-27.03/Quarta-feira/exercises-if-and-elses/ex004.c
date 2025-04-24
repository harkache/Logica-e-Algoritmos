//Verificar se o número inteiro "X" pertence ao intevalo fechado [a, b].
#include <stdio.h>

void main (){
    float X;
    float C;

    C = 12 , 13, 14;

    printf("Escreva o numero para x: ");
    scanf("%f", &X);

    if(X <= 14 && X >= 12){
        printf("O %f pertence ao conjunto [12,13,14]!", X);
    }else{
        printf("O %f nao pertence ao conjunto [12,13,14]!", X);
    }
}