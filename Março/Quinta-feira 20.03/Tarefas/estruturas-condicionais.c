//Posição de um time no Brasileirão.
#include <stdio.h>

int main (){

    int posi;

    printf("Informe a classificacao do seu clube:  \n");
    scanf("%d \n", posi);

    int condicao = posi >= 17;
    if (condicao == 1){
        printf("O seu time sera rebaiaxdo");
    }
    else (condicao == 0){
        printf("O seu time nao será rebaixado");
    }

    return 0;
}