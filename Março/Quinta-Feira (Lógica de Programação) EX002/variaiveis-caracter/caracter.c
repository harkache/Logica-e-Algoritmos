#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "Portuguese");

    char Certo;
    char Errado;

    Certo = 'C';
    Errado = 'E';

    printf("A primeira variável é %c, e a segunda variável é %c \n", Certo, Errado);

    return 0;
}