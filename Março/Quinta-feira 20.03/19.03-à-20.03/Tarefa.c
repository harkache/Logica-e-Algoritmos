#include <stdio.h>

int main (){
    //Resultados Negativos
    int q1 = 2;
    int q2 = 3;
    int q3 = 4;

    //1 Expressão negativa

    int one = q1 > 10;
    printf("O resultado da expressao acima e: Falso (%d) .\n", one);

    //2 Expressão negativa
    int two = q1 > q2 + q3;
    printf("O resultado da expressao acima e: Falso (%d) .\n", two);

    //3 Expressão negativa
    int three = q2 > q3 + q2;
    printf("O resultado da expressao acima e: Falso (%d) .\n", three);

    //--------------Expressões Positivas------------------------------

    int qp1 = 40
    int qp2 = 50
    int qp3 = 60

    //1 Expressão positiva

    int um = qp1 == 40;
    printf("O resultado da expressao acima e: Positiva (%d) .\n", um);

    //2 Expressão positiva

    int dois = qp2 < qp1 + qp3;
    printf("O resultado da expressao acima e: Positiva (%d) .\n", dois);

    //3 Expressão positiva

    int tres = qp3 != qp1
    printf("O resultado da expressao acima e: Positiva (%d) .\n", tres);

    return 0;
}