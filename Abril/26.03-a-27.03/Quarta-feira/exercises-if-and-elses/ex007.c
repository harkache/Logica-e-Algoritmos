//Loja e seus descontos
#include <stdio.h>

int main (){
    float p;
    int desconto;
    float calculo; 

    printf ("Digite o valor da sua compra: ");
    scanf ("%f", &p);

    if( p > 100){
        desconto = '10';
        calculo = p - (p * 10 / 100);  

    } else if ( p > 200){
        desconto = '15';
        calculo = p - (p * 15 / 100);

    } else if (p > 500){
        desconto = '20';
        calculo = p - (p * 20 / 100);

    } else if (p <= 100){
        desconto = '0';
        calculo = p;
    }
    printf("%f tem %c de desconto e o valor total e: %f", p, desconto, calculo);

    return 0;
}