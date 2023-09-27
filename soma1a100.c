#include <stdio.h>

#define VALOR 100

int main(){
    int i=1, soma=0;
    while(i<=VALOR)
        soma+=(i++);
    printf("soma: %d",soma);
}