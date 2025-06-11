#include <stdio.h>
#include <stdlib.h>

int main () {

    int Vetor [] = {12, 25, 18, 30};
    int *p = Vetor;
    int X = *(p + 2) + 2 * *(p + 1);

    system("cls");
    printf("%d\n", X);
    
    return 0;
}