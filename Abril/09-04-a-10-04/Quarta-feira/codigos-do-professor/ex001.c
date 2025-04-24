//Soma dos números entre o valor escolhido pelo usuário.
#include <stdio.h>
#include <stdlib.h>

int main (){
    int N; //Variável para guardar o número do usuário
    int Soma = 0;
    int i;

    system("cls");
    printf("Digite um numero positivo: \n");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) Soma = Soma + i;
    printf("Soma de todos os numeros de 1 a %d: %d.\n", N, Soma);

    return 0;
    
}