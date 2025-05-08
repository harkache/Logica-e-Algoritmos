#include <stdio.h>
#include <stdlib.h>

#define erro -1

void exibirMenu (){ //apenas funciona para exibir um conteúdo

    system("cls");
    printf("------------------------------------------\n");
    printf("Modulo de um calculo aritmetico simples\n");
    printf("[1] Soma\n");
    printf("[2] Subtracao\n");
    printf("[3] Multiplicacao\n");
    printf("[4] Divisao\n");
    printf("[5] Resto de divisao\n");
    printf("------------------------------------------\n");
    printf("Escolha uma opcao\n");
    printf("-> ");
}

int RealizarOperacao (int opc, int n1, int n2){

    int resposta;

    switch (opc) {
        case 1:
            resposta = n1 + n2;
            break;
        case 2:
            resposta = n1 - n2;
            break;
        case 3:
            resposta = n1 * n2;
            break;
        case 4:
            resposta = n1 / n2;
            break;
        case 5:
            resposta = n1 % n2;
            break;
        case 6:
            printf("Encerrado...\n");
            exit(0); // para encerrar a execução do código-fonte
        default:
            resposta = erro;
            printf("Digite uma opçao valida!");
            break;
    }

    return resposta;
    printf("O resultado da conta e %d", resposta);

    return 0;
}

int main (){
    int opc;
    int n1;
    int n2;
    int resposta;
    
    while (1){
        exibirMenu(); //isso faz com que o processamento volte para a função "exibirMenu"
        scanf("%d", &opc);
        if (opc != 6){
            printf("Escolha dois numeros\n");
            printf("->  ");
            scanf("%d %d", &n1, &n2); 
        }
       
    
        resposta = RealizarOperacao (opc, n1, n2);

        printf("O resultado e %d\n", resposta);
        system ("pause");

        printf("Pressione qualquer tecla para continuar...");
    }

    return 0;
}   
