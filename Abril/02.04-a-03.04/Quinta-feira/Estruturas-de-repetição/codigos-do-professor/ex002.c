//Atividade para listar os valores de i
#include <stdio.h>
#include <stdlib.h>

int main (){
    system("cls");

    int i;
    for (i = 1; i < 8; i++) printf("O valor de i é %d .\n", i); //sempre que há apenas UM comando dentro das chaves do for, as chaves podem ser excluidas
    
    printf("O último valor atribuido para i é %d .\n", i);

    return 0;
}