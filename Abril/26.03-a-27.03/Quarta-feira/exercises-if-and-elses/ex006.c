//Verificando a nota de um aluno e repassando a classificação correspondente
#include <stdio.h>

int main (){
    float nota;
    char classificacao;

    printf("Digite a sua nota correspondente: ");
    scanf("%f", &nota);

    if( nota >= 9){
        classificacao = 'A';
        printf("A classificacao e %c", classificacao);

    } else if (nota >= 7 && nota < 9){
        classificacao = 'B';
        printf("A classificacao e %c", classificacao);

    } else if (nota >= 5 && nota < 7){
        classificacao = 'C';
        printf("A classificacao e %c", classificacao);
        
    } else if (nota < 5){
        classificacao = 'D';
        printf("A classificacao e %c", classificacao);
    }

    return 0;
}