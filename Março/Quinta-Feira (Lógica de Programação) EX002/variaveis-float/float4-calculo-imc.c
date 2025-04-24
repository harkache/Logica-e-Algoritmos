#include <stdio.h>

int main(){
    float M = 120; //ariável para massa com valor de 120.
    float H = 2.10; //Variável para altura (height) com valor de 2.10
    float IMC = M/(H *H); //Como o imc tem h elevado a 2, a potência se torna prioridade, e por isso está entre parenteses
    printf("O resultado do IMC é: %.3f .\n", IMC); // Para mostrar apenas 3 dígitos, coloquei %.3f.

    return 0;
}