include <stdio.h>
#include <stdlib.h>

typedef struct {
    char Nome [30];
    int P;
    int V;
    int E;
    int D;

} Time;

Time * LerTime;

int main (){



    return 0;
}

Time * LerTime() {
    
    Time * T = (Time *) malloc(sizeof(Time));
    if(T == NULL){
        printf("ERRO: não foi possivel alocar memoria para o time!\n");
        return NULL;
    }
    printf("Dados: ");
    scanf("%[^,], %d, %d, %d", T->Nome, &T->V, &T->E, &T->D);
    T->P = 3 & T->V + 1 * T->E;
    return T;
}