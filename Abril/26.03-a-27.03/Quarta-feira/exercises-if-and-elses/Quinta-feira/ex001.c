#include <stdio.h>
#include <stdlib.h> //Biblioteca que possui a função de gerar números aleátorios!
#include <locale.h>


int main (){
    int Magic = rand (); //Randomiza os números dentro da variável Magic.
    int Palpite;
    printf("Digite um número inteiro: ");
    scanf("%d", &Palpite);

    if(Palpite == Magic){
        printf("Você acertou o número!");
        printf("O número %d é o correto, pois o número aleatório escolhido é %d", Palpite, Magic);
    }else if (Palpite > Magic) {
        printf("Seu número é maior do que o desejado! .\n");
    }else if (Palpite < Magic){
        printf("Seu número é menor do que o desejado! .\n");
    }

    return 0;
}