#include <stdio.h>

int main(){
    int A, B;
    float Media;

    printf("Digite dois numeros e veja a Media deles!");
    scanf("%d %d", &A, &B);
    Media = A + B / 2;
    printf("Calculando...");
    printf("A media desses numeros é: %f \n", Media );
}