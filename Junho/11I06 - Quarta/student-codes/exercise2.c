#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char Nome [30];
    int P;
    int V;
    int E;
    int D;

} Time;

Time * LerTime();
void atualizarTime(Time * T, int v, int e, int d);

int main (){

    Time * X = LerTime();
    
    printf("O time %s tem %d pontos.\n", X->Nome, X->P);
    atualizarTime(X, 13, 4, 7);
    printf("O time %s tem %d pontos\n", X->Nome, X->P);

}

void atualizarTime(Time * T, int v, int e, int d) {

    T -> V = v;
    T -> E = e;
    T -> D = d;
    T -> P = 3 * v + 1 * e;

}