#include <stdio.h>
#include <stdlib.h>

/*
A = É o primeiro termo da progressão
R = Razão (é o aumento ou diminuição de um temro para o seguinte)
N = A quantidade de termos na progressão
PA = Determina o termo que está na posição N
*/

float PA (float A, float R, int N){ //função PA (apenas nome)
    
    float resposta = A; 
    for (int i = 2; i <= N; i++) resposta = resposta + R;
    return resposta;

}

int main (){

    float t1 = PA (2, 4, 5);
    printf("Teste 1: %2.f\n", t1);

    float t2 = PA (2, 4, 7);
    printf("Teste 2: %2.f\n", t2);

    printf("Teste 3: %2.f\n", PA (1, 2, 10)); //É possível chamar a função PA no próprio printf
    printf("Teste 4: %2.f\n", PA (13, 7 ,1));
    
    return 0;
}