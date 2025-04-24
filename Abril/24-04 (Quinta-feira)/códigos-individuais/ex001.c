//tentando exibir apenas os números na diagonal da matriz, ou seja, mostrar apenas um número com o mesmto tanto de coluna e de linha
#include <stdio.h>

int main (){
    system ("cls");
    
    int cl; //para percorrer as colunas e as linhas da matriz=
    int matriz[4][4] = {
        {8, 1, 3, 1},
        {7, 8, 1, 2},
        {1, 2, 1, 7},
        {4, 6, 8, 3}
    };

   for(cl = 0; cl < 4; cl++) printf("%d ", matriz[cl][cl]);

    return 0;
}