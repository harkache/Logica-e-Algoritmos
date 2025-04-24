#include <stdio.h>
#include <stdlib.h>

int main(){
    float Soma = 0.0;
    float Media;
    int i;
    float temp[10];

    for (i = 0; i < 10; i++){
        printf("Digite a temperatura: ");
        scanf("%f", &temp[i]);
        Soma = Soma + temp[i];
    }
    Media = Soma / 10.0;
    printf("A media das temperaturas é %.2f.\n", Media);

    //Mostrando os dias em que a temperatura foi maior do que a média

    for(i = 0; i < 10; i++)
        if(temp[i] > Media)
            printf("%d ", i);
}