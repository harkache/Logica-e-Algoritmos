#include <stdio.h>
#include <string.h>

int main (){

    char palavra[] = "ABCD";
    int i;

    for (i = 0; i < 4; i++) palavra[i] = palavra[i] + 1;
    printf("%s\n", palavra);
}