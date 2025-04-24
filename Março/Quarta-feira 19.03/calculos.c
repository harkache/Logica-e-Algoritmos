#include <stdio.h>
//Soma de 17 com 4 
int main (){
    int A;
    int B;
    float soma;
    float multiplicacao;

    printf("Digite dois numeros e veja a soma desses dois numeros \n");
    scanf("%d %d", &A, &B);
    soma = A + B;
    printf("A soma de 17 e 4 encontra este resultado %f \n", soma);

    printf("Digite dois numeros e veja a multiplicacao desses dois numeros \n");
    scanf("%d %d", &A, &B);
    multiplicacao = A * B;
    printf("A multiplicacao desses dois numeros %2.f \n", multiplicacao);
}
