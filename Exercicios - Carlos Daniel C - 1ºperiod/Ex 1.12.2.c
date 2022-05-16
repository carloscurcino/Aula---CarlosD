#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=0, totalHomens=0, totalMulheres=0;
    float alt=0.0, maiorAlt=0.0, menorAlt=0.0, media=0.0, somaAltMulheres=0.0;
    char sex;
    printf("Digite a quantidade de pessoas!\n");
    scanf("%d", &x);

    for(int i=0; i<x; i++){
        printf("\nDigite o numero altura\n");
        scanf("%f", &alt);
        printf("\nQual sexo? Digite M para mulher e H para homem\n");
        fflush(stdin);
        scanf("%c", &sex);
        if(sex == 'M'){
            totalMulheres++;
            somaAltMulheres=alt+somaAltMulheres;
            media=somaAltMulheres/totalMulheres;
        }else{
            if(sex == 'H'){
                totalHomens++;
            }

        }

        if(alt>maiorAlt){
            maiorAlt=alt;
            menorAlt=maiorAlt;
        }else{
            if(alt<menorAlt){
                menorAlt=alt;
            }

        }


    }
    printf("Maior altura e: %.2f\n", maiorAlt);
    printf("Menor altura e: %.2f\n", menorAlt);
    printf("A media de altura das mulheres e: %.2f\n", media);
    printf("A quantidade de humens e: %d\n", totalHomens);


    //NUM SEI;

    return(0);
}
