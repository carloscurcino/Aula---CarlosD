#include <stdio.h>
#include <stdlib.h>


int main(){
    int andre, carlos;
    float felipe, valor;
    printf("Digite o valor da conta!\n"); //Tem como mudar o float de ponto pra virgula? pesquisar.
    scanf("%f", &valor);
    andre=valor/3;
    carlos=valor/3;
    felipe=valor-(andre+carlos);
    printf("Andre paga: %i\nCarlos paga: %i \nE Felipe paga: %f", andre, carlos, felipe);

    return(0);
}
