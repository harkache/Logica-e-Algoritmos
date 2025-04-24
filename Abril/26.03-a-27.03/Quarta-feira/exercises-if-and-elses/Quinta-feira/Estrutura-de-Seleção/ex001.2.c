//Tarefa sobre digitar uma letra das palavras selecionadas: ARANHA, BANANA, CASA, DADO e ELEFANTE
#include <stdio.h>
#include <stdlib.h>

int main (){
    char Letra;
    printf("Digite uma letra a seguir: ");
    scanf("%c", &Letra);
    
    switch(Letra){
        case 'A':
        printf("Foi digitado uma letra da palavra ARANHA");
        break;

        case 'B':
        printf("Foi digitado uma letra da palavra BANANA");
        break;

        case 'C':
        printf("Foi digitado uma letra da palavra CASA");
        break;
        
        case 'D:':
        printf("Foi digitado uma letra da palavra DADO");
        break;

        case 'E':
        printf("Foi digitado uma letra da palavra ELEFANTE");
        break;

        default:
        printf("Sua letra é incorreta! Digite apenas as palavras A, B , C , D e E em MAIUSCULO");
        break;

    }
    return 0;
}