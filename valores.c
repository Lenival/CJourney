#include <stdio.h>

int main() {
    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Digite 2 inteiros e veja seu produto!  *\n");
    printf("******************************************\n");

    int x,y;    
    printf("Digite o primeiro inteiro:\n");

    scanf("%d", &x);
    
    printf("Digite o segundo inteiro:\n");

    scanf("%d", &y);

    printf("O produto dos valores é: %d\n\n", x*y);

}