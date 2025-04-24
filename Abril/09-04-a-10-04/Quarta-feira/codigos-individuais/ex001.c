// Solicite dois números ao usuário e exiba todos os números ímpares dentro desse intervalo
#include <stdio.h>
#include <stdlib.h>

int main (){
    int n;
    int n2;
    int selecao;

    system("cls");
    printf("Digite um numero: \n"); //O usuário digita um número que entra na variável "int n;"
    scanf("%d", &n);

    printf("Digite outro numero: \n"); //O usuário digita outro número que entra na variável "int n2;". Esse número vai ser o final.
    scanf("%d", &n2);

    for (selecao = n; selecao <= n2; selecao++){ // Usamos selecao para a conta. selecao é igual ao primeiro número escolhido pelo usuário. seleacao não pode ser maior do que o segundo número escolhido pelo usuário. E selecao++ é para aumentar o primeiro número escolhido em um 
        if (selecao % 2 == 1) //vai fazer a conta de divisão e se caso o resto da divisão foi 1, ele é impar. Caso seja 0, ele é par. Nós so queremos os impares.
            printf("%d ", selecao);
    }
    
return 0;
}