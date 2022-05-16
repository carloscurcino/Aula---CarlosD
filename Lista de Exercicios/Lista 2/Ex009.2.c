#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float ca, co, hip;
    printf("Qual o valor do cateto adjacente?\n")/
    scanf("%f", &ca);
    printf("\nQual o valor do cateto oposto?\n")/
    scanf("%f", &co);
    hip=sqrt(ca*ca+co*co);
    printf("Hipotenusa: %.2f", hip);


    return(0);
}
