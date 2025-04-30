#include <stdio.h>

int area (int x){
    int resposta;
    if (x == 2) resposta = 4;
    else if (x == 3) resposta = 9;
    else if (x == 4) resposta = 16;
    else if (x == 5) resposta = 25;
    return resposta;
}

int main (){
    int l;

    for (l = 2; l < 6; l++){
        int a = area(l);
        printf("%d -> %d\t\n", l, a);
    }
}