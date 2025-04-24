#include <stdio.h>

void main() {

    char V[12] = {'M', 'e', ' ', 'l', 'e', 'm', 'b', 'r', 'o', 'u', '\0'};

    // '\0': caractere nulo e indica o final da string

    printf("%s\n", V);
    printf("%c%c%c%c%c%c%c\n", V[3], V[4], V[5], V[6], V[7], V[8], V[9]);

    return 0;
}