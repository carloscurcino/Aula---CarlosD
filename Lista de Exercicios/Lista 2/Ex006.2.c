#include <stdio.h>
#include <stdlib.h>


int main(){
    int D, a, m, d;
    printf("\Quantos dias estamos em acidentes?\n");
    scanf("%i", &D); //Lembrar de colocar & sempre no scanf
    a = D/365;
    m =(D%365)/12;
    d = (D%365)%12;
    printf("Estamos a %i anos, %i meses e %i dias sem acidentes!", a, m, d);



    return(0);
}
