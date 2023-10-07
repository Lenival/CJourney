#include <stdio.h>

int main() {

    int numero;
    printf("Informe um número inteiro:\n");
    scanf("%d",&numero);
    for(int i=1;i<=10;i++)
        printf("%d * %d\t= %d\n", numero, i, numero*i);
}