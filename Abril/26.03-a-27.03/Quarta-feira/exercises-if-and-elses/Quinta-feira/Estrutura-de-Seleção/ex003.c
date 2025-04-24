    //Tarefa sobre selecionar um número e ver o dia correspondente. Usando switch, case, default e break.
    #include <stdio.h>
    #include <stdlib.h>

    int main (){
        int N;
        printf("Escolha um número e veja o dia correspondente: .\n");
        scanf("%d", &N);

        switch(N){
            case 1:
            printf("O dia correspondente e: Domingo");
            break;

            case 2:
            printf("O dia correspondente e: Segunda-feira");
            break;

            case 3:
            printf("O dia correspondente e: Terça-Feira");
            break;

            case 4:
            printf("O dia correspondente e: Quarta-feira");
            break;

            case 5:
            printf("O dia correspondente e: Quinta-Feira");
            break;

            case 6:
            printf("O dia correspondente e: Sexta-feira");
            break;

            case 7:
            printf("O dia correspondente e: Sabado");
            break;

            default:
            printf("Apenas números de 1 a 7");
            break;
        }

        return 0;
    }