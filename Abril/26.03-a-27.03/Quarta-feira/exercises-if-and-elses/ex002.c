//Verificando se uma pessoa é morbida ou não
#include <stdio.h>

int main (){
    float P; //Peso
    float H; //Altura
    float IMC; //índice de massa corporal

    printf("Digite seu peso (em KG): \n");
    scanf("%f", &P);

    printf("Digite sua altura: \n");
    scanf("%f", &H);

    IMC = P / (H * H);

    if (IMC >= 40) {
        printf("A pessoa possui obesidade morbida .\n");
    } else {
        printf ("A pessoa nao possui obesidade morbida .\n");

    }
}
