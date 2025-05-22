
//criando uma playlist de 5 músicas, como o spotify

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//struct música

struct musica {
    char titulo [50];
    char autor [100];
    int ano;
};

int main (){
    
    struct musica a = {"Velha Infância", "Nando Reis", 2002};
    struct musica b = {"Aquarela", "Toquinho", 1983};
    struct musica c = {"151 RUM", "JID", 2018};
    struct musica d = {"Triad", "TOOL", 2001};
    struct musica e = {"Not Like Us","Kendrick Lamar", 2024};

    struct musica PlayList[5];
    PlayList [0] = a;
    PlayList [1] = b;
    PlayList [2] = c;
    PlayList [3] = d;
    PlayList [4] = e;

    for (int i = 0; i < 5; i++) //for utilizado para verificar cada autor
    {
        printf("%s\n", PlayList[i].autor);
        printf("\n");

        printf("%s\n", PlayList[i].titulo);
        printf("\n");

        printf("%d\n", PlayList[i].ano);
        printf("\n");
    }
    
    return 0;
}