#include <stdio.h>

int main(){
    int N;
    float T;
    printf("Escolha um numero para N:  ");
    scanf("%d", &N);
    T = N * (N + 1) / 2;
    printf("O resultado da formula e: %2.f", T);
    
}