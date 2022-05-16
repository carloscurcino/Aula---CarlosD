#include <stdio.h>
#include <stdlib.h>


int main(){
    float QS, queij, pres, hamb, kg; //deixei em float pq se a quantidade de sanduiches for pequena o resultado vai ser 0 em int
    printf("\nQuantos sanduiches?\n");
    scanf("%f", &QS);
    queij = (QS*50)/1000;
    pres = (QS*50)/1000;
    hamb = (QS*100)/1000;
    kg = queij+pres+hamb;

    printf("Serao necessarios %f kg de queijo, %f kg de presunto e %f kg de hamburger. Sendo um total de: %f kg's", queij, pres, hamb, kg);




    return(0);
}
