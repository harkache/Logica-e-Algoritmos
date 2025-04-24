#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 //Verificando se um número é primo

int primo (int n){
    if (n < 2) return 0; //retorna falso!
    for(int i = 2; i * i <= n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main (){

    int n;
    int par;
    int i;
    int soma;

    //Pede ao usuário que digite um número inteiro, par e maior que 2
    printf("Digite um número inteiro, par e maior que 2: \n");
    scanf("%d", &n);

    par = n % 2;

    //Verificação se o número é PAR
    if( par == 0 ){
        printf("O número digitado é PAR!\n");
    }else{
        printf("O número digitado não é PAR!\n");
        return 1;
    } 
    
    //Verificação se o número é maior que 2

    if( n > 2){
        printf("O número digitado É MAIOR que 2!\n");
    } else {
        printf("O número digitado NÃO É maior que 2!\n");
        return 1;
    }

    printf("Verificando pares primos para a decomposição.\n");
    //Soma dos números

    for (i = 2; i <= n / 2; i++){
        if(primo(i) && primo(n - i)){
            printf("%d + %d = %d\n", i, n - i , n);
        }
    }
    
    return 0;
    
}
