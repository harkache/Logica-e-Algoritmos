//Tentativa falha de calculadora

#include <stdio.h>

int main (){
    int N1;
    int N2;
    int D;
    char C;

    printf ("Escreva dois numeros a seguir: .\n");
    scanf("%d %c %d ", &N1, &C, &N2);



    switch(C){
        case '+':
        D = N1 + N2;
        printf("O resultado da expressao %d + %d e %d", N1, N2, D);
        break;
        
        case '-':
        D = N1 - N2;
        printf("O resultado da expressao %d - %d e %d", N1, N2, D);
        break;

        case '*':
        D = N1 * N2;
        printf("O resultado da expressao %d * %d e %d", N1, N2, D);
        break;

        case '/':
        D = N1 / N2;
        printf("O resultado da expressao %d / %d e %d", N1, N2, D);
        break;

        case '%':
        D = N1 % N2;
        printf("O resto desses dois numeros %d e %d o resultado e %d", N1, N2, D);
        break;

        default:
        printf("Faca os calculos apenas com esses operadores: +, -, /, *, %");
    }

    return 0;
}