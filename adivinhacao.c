#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // imprime cabecalho do nosso jogo
    //printf("******************************************\n");
    //printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    //printf("******************************************\n");
	printf("          P  /_\\  P                              \n");
	printf("         /_\\_|_|_/_\\                             \n");
	printf("     n_n | ||. .|| | n_n         Bem vindo ao    \n");
	printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação!\n");
	printf("    | \" \"  |_|_|_|  \" \" |                        \n");
	printf("    |_____| ' _ ' |_____|                        \n");
	printf("          \\__|_|__/                              \n");






    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;
    //int numerosecreto = 42;

    int chute;
    int tentativas = 1;
    int acertou=0;

    double pontos = 1000;


    int numerodetentativas = 0;

    int nivel;
    printf("Qual nível de dificuldade você quer jogar?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d",&nivel);

    switch (nivel)
    {
    case 1:
        numerodetentativas = 20;
        break;
    
    case 2:
        numerodetentativas = 15;
        break;
    
    case 3:
        numerodetentativas = 6;
        break;
    default:
        printf("Escolha um nível válido na próxima!\n");
        exit(0);
        break;
    }


    for (;tentativas <=numerodetentativas;tentativas++) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) {
            break;
        } else if(maior) {
                printf("Seu chute foi maior que o número secreto\n");
            }

            else {
                printf("Seu chute foi menor que o número secreto\n");
            }

            //tentativas++;

            double pontosperdidos = (double)abs(chute - numerosecreto) / 2;
            //double pontosperdidos = (double)(chute - numerosecreto) / 2;
            pontos = pontos - pontosperdidos;

        }
        printf("Fim de jogo!\n");
            
        if(acertou){

        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

            printf("Você ganhou!\n");
            printf("Você acertou em %d tentativas!\n", tentativas);
            printf("Total de pontos: %.1f\n", pontos);
        }else{
            printf("       \\|/ ____ \\|/    \n");
            printf("        @~/ ,. \\~@      \n");
            printf("       /_( \\__/ )_\\    \n");
            printf("          \\__U_/        \n");
            printf("O número era %d\n",numerosecreto);
            printf("Você perdeu! Tente de novo!\n");
        }

    }