#include <stdio.h>
#include <stdlib.h>
#include <math.h>>

int main(){

    int num, c, d, u;
    printf("\nDigite um numero inteiro de ate tres digitos!\n");
    scanf("%i", &num);
    printf("Seu numero e: %i\n", num);
    c = num/100;
    d = (num%100)/10;
    u = num%10;

    printf("Centena: %i \nDezena: %i \nUnidade: %i", c, d, u);


    return(0);
}
