#include <stdio.h>
int main (){
    int V;
    int V2;
    int V3;
    int V4; 
    float D;

    printf("Coloque dois 4 numeros separados \n");
    scanf("%d %d %d %d", &V, &V2, &V3, &V4);
    
     D = (float)(V + V2 + V3 + V4) /4;

    printf("A media aritmetica dos numeros escolhido e: %3.f \n", D);
}

