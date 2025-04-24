#include <stdio.h>

void main() {

    char V[200] = "Xi Jinping é meu amigo, e acho que chegaremos a um acord, diz Trump \0";
    int i;

    for (i = 0; V[i] != '\0'; i++);

    printf("%s\n", V);
    printf("O tamanho da string é %d.\n", i);

    return 0;
}