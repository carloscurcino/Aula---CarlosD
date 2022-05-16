#include <stdio.h>
#include <stdlib.h>


int main(){
        int temp, h, m, s;
        printf("\nDigite a duraçao do evento em segundos!\n");
        scanf("%i", &temp);
        printf("%i", temp);
        h = temp/3600;
        m = (temp%3600)/60;
        s = ((temp%3600)%3600)/10;
        printf("\n%i Horas, %i minutos e %i segundos.", h, m, s);





    return(0);
}
