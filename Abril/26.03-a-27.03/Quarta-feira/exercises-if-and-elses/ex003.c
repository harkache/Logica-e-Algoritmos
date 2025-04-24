//Verificando se uma pessoa tem obrigatoriedade para votar ou não!
#include <stdio.h>

int main (){
    int IDADE;
    printf("Digite sua idade: ");
    scanf("%d", &IDADE);

    if (IDADE >= 18){
        printf("Seu voto e OBRIGATORIO!");
    } else {
        printf("Seu voto NAO e obrigatorio!");
    }

    return 0;
}