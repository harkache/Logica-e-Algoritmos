#include <stdio.h>
#include <string.h>

int main (){
    int p[6] = {2, 4, 6, 7, 8, 9, 2};
    char frase[] = "Eles venceram, e o sinal está fechado para nós (...)";
    int x = p[2] + p[4] * p[1];
    printf("%d\n", x);

    char minhastring [50];
    strcpy(minhastring, "Está é uma frase de exemplo"); //copia minhastring
    

    printf("%s\n", minhastring);

    return 0;
}