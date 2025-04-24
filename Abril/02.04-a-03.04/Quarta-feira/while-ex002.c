//Qual o valor da soma dos 53 primeiros termos da sequência (2,5,8,11,...) ou seja, de uma progressão aritmética de primeiro termo 2 e razão 3?
#include <stdio.h>

int main(){
    int N = 2;
    int C = 0;
    int T = 2;

    while(N <= 53){
        C = C + T;
        T = T + 3;
        T++;
    }
    printf("%d", C);

    return 0;
}