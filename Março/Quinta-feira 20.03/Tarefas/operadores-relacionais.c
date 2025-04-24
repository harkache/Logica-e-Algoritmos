#include <stdio.h>

int main (){
    int A;
    int B;
    int C;
    int one;

    A = 3;
    B = 7;
    C = 4;

 // Primeira questão de Operadores Relacionais
    one = (A + C) > B; //Falso
    printf("one = (A + C > B) \n");
    printf("O resultado da expressao acima e: %d \n", one);

// Segunda questão de Operadores Relacionais
    int two;

    two = B >= (A + 2); //Verdadeiro
    printf("two = B >= (A + 2) \n");
    printf("O resultado da expressao acima e: %d \n", two);

//Terceira questão de Operadores Relacionais
    int three;

    three = C == (B - A); //Verdadeiro
    printf("three = C == (B - A) \n");
    printf("O resultado da expressao acima e: %d \n", three);

//Quarta questão de Operadores Relacionais
    int four;

    four = (B + A) <= C; //Falso
    printf("four = (B + A) <= C \n");
    printf("O resultado da expressao acima e: %d \n", four);

//Quinta questão de Operadores Relacionais
    int five;

    five = (C + A) > B; //Falso
    printf("five = (C + A) > B \n");
    printf("O resultado da expressao acima e: %d \n", five);
}