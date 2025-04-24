//Solicite ao usuário um número inteiro positivo, e desenhe uma pirâmide de asteriscos com base nesse valor

#include <stdio.h>
#include <stdlib.h>

int main (){

    system("cls");

    int n; //o número de linhas escrito pelo usuário
    int i; //para contar o número de linhas
    int ast; //para reproduzir a quantidade asteriscos 
    int j; //variavel para aumentar os astericos conforme o número escolhido pelo usuário

    printf("Digite um numero: \n");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++, ast = ast + 2){
        printf("\n");
        for (j = 1; j <= ast; j++)
            printf("*");
    }

    return 0;
}