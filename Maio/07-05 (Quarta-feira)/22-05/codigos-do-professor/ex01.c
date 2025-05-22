
//Utilização do Struct

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct Retangulo {
    float base;
    float altura;
};

// protótipo das funções
/*
Utiliza essa área para declarar as funções, já que é necessário declarar antes para serem usadas, além de que, deixa o código mais organizado.
*/

float calcularArea (struct Retangulo X); //Declarando a função para calcular a area
float calcularPeri (struct Retangulo Y); //Declarando a função para calcular o perimetro
char * verificarQuadrado (struct Retangulo Z); //Declarando uma função para ver se é o retângulo é quadrado OBS: char * -> strings de qualquer tamanho

int main (){

    struct Retangulo ABCD = {5, 3}; //Sintaxe: Conjunto de Variáveis (struct Retangulo) Nome para o Conjunto = {Valor para base, valor para altura};
    struct Retangulo EFGH = {1, 7}; //Base 1 e Altura 7.
    struct Retangulo PQRS = {10, 10}; //Base 10 e Altura 10.

    printf("Base: %.2f\n", ABCD.base); //"ABCD.base" seria puxar a variável base dentro do conjunto de varáveis ABCD
    printf("Altura: %.2f\n", ABCD.altura);
    printf("A area de ABCD: %.2f\n", calcularArea(ABCD)); //Utilizando a função calcularArea para calcular a área de ABCD
    printf("O perimetro de ABCD: %.2f\n", calcularPeri(ABCD)); //Utilizando a função calcularPeri para calcular o perimetro de ABCD
    printf("O retângulo é um quadrado: %c\n", verificarQuadrado(ABCD));
    printf("\n");

    printf("Base: %.2f\n", EFGH.base);
    printf("Altura: %.2f\n", EFGH.altura);
    printf("A area de EFGH: %.2f\n", calcularArea(EFGH));
    printf("O perimetro de EFGH: %.2f\n", calcularPeri(EFGH));
    printf("\n");

    printf("Base: %.2f\n", PQRS.base);
    printf("Altura: %.2f\n", PQRS.altura);
    printf("A area de PQRS: %.2f\n", calcularArea(PQRS));
    printf("O perimetro de PQRS: %.2f\n", calcularPeri(PQRS));
    printf("\n");
  
    return 0;
}

// implementando as funções
/*
Utiliza essa área para implementar as funções, utilizar elas de fato, atribuindo valor as mesmas
*/

float calcularArea (struct Retangulo X) {
    float area = X.base * X.altura;
    return area;
}

float calcularPeri (struct Retangulo Y) {
    float perimetro = 2.0 * (Y.base + Y.altura);
    return perimetro;
}

char * verificarQuadrado (struct Retangulo Z){
    char resposta [5]; //Declarando a quantidade de caracteres da string. "Não" e "Sim" possuem 3 caracteres, mas na linguagem C possui um espaço a mais, por isto 4.

    if(Z.base == Z.altura) strcpy(resposta, "Sim!"); //Strcpy para copiar um string dentro de uma outra string!
    else strcpy(resposta, "Não!");
    return resposta;
}