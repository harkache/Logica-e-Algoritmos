#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    system("cls");

    int abc;
    int cba;
    int centenas, unidades, dezenas;
    //variavéis para abc e cba acima
    int xyz;
    int zyx;
    int centenas2, unidades2, dezenas2;
    int inverter2;
    //variaveís para xyz acima
    int diferenca;
    int inverter;
    int soma1;
    int somafinal;


    printf("Digite um número que possuá três algarismos a seguir: \n");
    scanf("%d", &abc);

    //Verificação se possui 3 algarismos
    if (abc >= 100 && abc <= 999){
        printf("O número escolhido está dentro dos parâmetros\n");
    } else{
        printf("O número escolhido não está dentro dos parâmetros! Por favor, escolha um número com 3 algorismos\n");
    } 

    //Verificação se possui diferença de 2 entre algarismos das centenas e unidades

    centenas = abc / 100;
    unidades = abc % 10;
    diferenca = abs(centenas - unidades);

    if (diferenca >= 2){
        printf("O número escolhido possui diferença de 2 entre as centenas e unidades. Portanto está dentro dos parâmetros!\n");
    } else {
        printf("O número não está dentro dos parâmetros de diferença entre centenas e unidades! Por favor, escolha outro número.\n");
    }

    //Invertendo a ordem de abc
    dezenas = (abc / 10) % 10; 
    inverter = unidades * 100 + dezenas * 10 + centenas;
    cba = inverter;
    printf("O valor da inversão do número escolhido é: %d\n", cba);

    //Soma do abc com cba que dará xyz
    soma1 = abc + cba;
    xyz = soma1;
    printf("O valor do número inicialmente escolhido mais o mesmo número invertido é: %d\n", xyz);
    //Invertendo xyz
    centenas2 = xyz / 100;
    unidades2 = xyz % 10;
    dezenas2 = (xyz / 10) % 10;
    inverter2 = unidades2 * 100 + dezenas2 * 10 + centenas2;
    zyx = inverter2;
    printf("A inversão do valor encontrado acima é: %d\n", zyx);
    //Somando xyz com zyx

    somafinal = xyz + zyx;
    printf("O valor final é: %d\n", somafinal);

    return 0;
}

