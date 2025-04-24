//Peça ao usuário que digite um número inteiro e exiba a tabuada de multiplicação de 1 a 10

#include <stdio.h>
#include <stdlib.h>

int main (){
    int n; //número que a pessoa digitou
    int m; //variável para multiplicação

    system("cls");
    printf("Digite um numero: \n");
    scanf("%d", &n);

    for(m = 1; m <= 10; m++)   // "m" = 1, "m" poder ser menor ou igual a 10 e "m" sempre vai aumentar de 1 em 1
        printf("%d x %d = %d\n", n, m, n * m); //inves de criarmos uma variável para guardar o valor da expressão, podemos apenas colocar a expressão em si (n * m)

    return 0;
}