//Tarefa para verificar se um número é Impar ou Par

#include <stdio.h>
#include <stdlib.h>

void main (){
    int number;
    printf("Para verificação de impar ou par, digite um número a seguir: .\n");
    scanf("%d", &number);

    switch(number % 2){
        case 1:
        printf("Seu numero e impar!");
        break;

        case 0:
        printf("Seu numero e par!");
        break;
    }

    return 0;
}