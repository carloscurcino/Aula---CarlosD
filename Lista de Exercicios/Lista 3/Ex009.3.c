#include <stdio.h>
#include <stdlib.h>

int main(){
    int AnoAT, AnoNas, AV, AB, AC, DVint, DiaAT, DiaNas, MesAT, MesNas, TDV;
    float MVint, TMV, d30, d31, d29, d28, fev, DV;
    printf("Digite seu ano, mes e dia de nascimento!\n");
    scanf("%i, %i, %i", &AnoNas, &MesNas, &DiaNas);
    printf("Digite seu ano, mes e dia atual!\n");
    scanf("%i, %i, %i", &AnoAT, &MesAT, &DiaAT);

    AV = AnoAT - AnoNas;
    AB = AV/4;
    if(AV%4 != 0){
        AB++;
    }
    AC = AV - AB;
    DVint = (AC*365)+(AB*366);
    MVint = DVint/30;
    TMV = MVint+(MesAT-MesNas);
    d31 = TMV*58.33/100;
    d30 = TMV*33.33/100;
    fev = TMV-d31-d30;
    d28 = fev-AB;
    DV = (d30*30)+(d31*31)+(d28*28)+(AB*29);
    TDV = (DV-(DiaAT+DiaNas))-32;

    printf("\nVoce viveu %i", TDV);//Tem que ver se minha conta tá certa.

    return(0);
}
