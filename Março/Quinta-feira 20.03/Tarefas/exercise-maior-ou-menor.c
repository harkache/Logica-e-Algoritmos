#include <stdio.h>

int main (){
    int M = 3 < 17; //Isso indicará que o resultado é verdadeiro, pois, 17 é maior que o número 3.
    printf("O resultado da expressão e: %d.\n", M);

//Questão 01 - Calcular dois números escolhidos pelo usuário!
    int X;
    int Y;
    int A;

    printf("Digite dois numeros a seguir: .\n");
    scanf("%d %d",&X,&Y);

    A = X != Y; 
    
    printf("Esses dois numeros e: %d .\n", A);

//Questão 02 - Usar dois números já programados!
    int O;
    int U;
    int B;

    O = 10;
    U = 20;

    B = O >= U;
    scanf("%d", B);
    printf("A expressao acima e: %d \n", &B); //Está errado. O número que apareceu é 6444.0. Concertar depois!

}
