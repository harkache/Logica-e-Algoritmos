#include <stdio.h>

int main (){
    
    int numeros[5] = {2, 3, 5, 8, 13}; //Vetor (array) de inteiros com 5 posições
    float temperatura[7] = {10.5, 13.6, 21.7, 21.8, 18.4, 19.0, 12.0};
    char time[20] = {'M', 'u', 's', 'h', 'u', 'c', ' ', 'R', 'u', 'n', 'a'};
    char equipe[20] = "Mushuc Runa";

    //acessando os elementos dos vetores
    
    printf("%d %d %d %d %d\n", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]); //para mostrar todos os números do "int numeros"
    printf("%d\n", numeros[3]); //será mostrado 8
    printf("%d\n", numeros[2] + numeros[4]); //18
    printf("%.2f\n",(temperatura[3] + temperatura[5]) / 2.0 ); //20.48
    printf("%c%c%c%c\n", time[0], time[1], time[4], time [8]); //Muu
    printf("%s\n", equipe); //Mushuc Runa

    return 0;
}
