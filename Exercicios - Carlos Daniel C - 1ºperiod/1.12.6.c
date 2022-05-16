
#include <stdio.h>
#include <stdlib.h>

int main(){
    float radioVida;
    radioVida=0;
    float Massa;
    float segundos, minutos, horas;

    printf("Digite a massa inicial!\n");
    scanf("%f", &Massa);

    while(Massa>0.5){
        Massa/=2;
        radioVida++;
    }
    segundos=radioVida*50;
    minutos=segundos/60;
    horas=minutos/60;
    printf("\nPara atingir um valor menor que 0.5 e necessario %.2f horas, %.2f minutos e %.2f segundos", horas, minutos, segundos);

    return 0;
}
