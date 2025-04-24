/*
Escreva o código-fonte de um programa que lê três valores (do tipo float) para serem armazenados em um vetor 
para, a seguir, calcular a média desses elementos
*/
#include <stdio.h>

int main(){

    float v1, v2, v3;
    float mul;

    printf("Escreva três valores decimais positivos: \n");
    scanf("%f%f%f", &v1, &v2, &v3);

    float m [3] = {v1, v2, v3};
    mul = (m[0] + m[1] + m[2]) / 3.0;

    printf("A media dos numeros escolhidos é: %2.f.\n", mul); 
}
/*
Para fazer essa atividade, também podemos usar o for:

int i;

for (i = 0; i < 3; i++){
    printf("Digite um numero: ");
    scanf("%f", &V[i]);
    Soma = Soma + V[i];
}
*/