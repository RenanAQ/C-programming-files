#include <stdio.h>

int main() {
    
    //Imprime o cabecalho do jogo
    printf("************************************\n");
    printf("* Bem vindo ao jogo de adivinhacao *\n");
    printf("************************************\n");

    int numerosecreto = 42;
    
    int chute;

    int acertou = chute == numerosecreto;

    printf("Qual o seu numero? ");
    scanf("%d", &chute);

    if(acertou) {
        printf("Voce acertou!\n");
    }
    else {
        int maior = chute > numerosecreto;
        if (maior) {
           printf("Voce errou! Seu chute foi maior que o numero secreto\n");
        }
        else{
            printf("Voce errou! Seu chute foi menor que o numero secreto\n");
        }
        
    }

}

