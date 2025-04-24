#include <stdio.h>

int main(){
    int N = 8;
    int Soma = 1;

    while (N >= 1){
        Soma = Soma * N;
        N--;
    }

    printf("%d", Soma);

    return 0;
}