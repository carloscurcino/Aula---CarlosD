#include <stdio.h>
#include <stdlib.h>

float calcSal(float sal, float vendas){
    float total;
    total = (vendas*15/100)+sal;
    return total;
}

int main(){

    char nome[20];
    printf("\nDigite seu nome!\n");
    scanf("%s", &nome);

    float salario;
    salario = 0;
    printf("\nQual seu salario?\n");
    scanf("%f", &salario);

    float vendas,result;
    vendas = 0;
    printf("\nQuanto vendeu em Rs?\n");
    scanf("%f", &vendas);

    result=calcSal(salario,vendas);
    printf("%s seu salario e %f",nome,result);



    return(0);
}
