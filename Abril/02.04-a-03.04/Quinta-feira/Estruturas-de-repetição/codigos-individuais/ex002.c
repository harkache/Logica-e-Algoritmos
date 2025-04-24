//Determine o valor dos 15 primeiros termos da sequência 
#include <stdio.h>
#include <stdlib.h>

int main (){
    system("cls");

    int n; 
    int soma = 0;

    for(n = 1; n <= 15; n++) soma = soma + n * n;
    printf("O resultado da expressão é %d .\n", soma);

}