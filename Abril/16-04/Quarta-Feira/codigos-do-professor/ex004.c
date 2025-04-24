#include <string.h>
#include <stdio.h>

int main (){

    char frase [1000];

    strcpy(frase, "Hoje");
    strcpy(frase, "É sexta");
    strcpy(frase, "-feira");
    printf("%s\n", frase); // -feira!

    strcpy(frase, "Hoje");
    strcat(frase, "É sexta");
    strcat(frase, "-feira");
    printf("%s\n", frase); // Sexta-feira!

    /*
    strcpy -> copiar strings
    strcat -> concatenar string
    strlen -> calcular o tamanho da string
    */

   int l = strlen(frase);
   printf("%d\n", l);

   

   return 0;
}