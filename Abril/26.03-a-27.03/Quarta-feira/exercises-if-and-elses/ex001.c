#include <stdio.h>

int main(){
    int N; //Variável para guardar o número digitado pelo usuário
    int R; //Variável para guardar o resultado da expressão do resto da divisão
    printf("Digite um numero a seguir: .\n");
    scanf("%d", N);

    R = N % 2; // Expressão que calcula o resto da divisão por 2
    
    if (R == 0){
        printf("O seu número é par!");
    } else{
        printf("O seu número é impar!");
    } 
}