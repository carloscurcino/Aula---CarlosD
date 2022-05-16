#include <stdio.h>
#include <stdlib.h>

int main(){
    float salBrut, parc;
    printf("Indique seu salario bruto!\n");
    scanf("%f", &salBrut);
    printf("\nQuanto que pagar de parcela?\n");
    scanf("%f", &parc);
    if(parc<=salBrut*30/100){
        printf("\nEmprestimo aceito!");
    }else{
        printf("\nEmprestimo nao aprovado!");
    }


    return(0);
}
