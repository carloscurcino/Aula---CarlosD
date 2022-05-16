#include <stdio.h>
#include <stdlib.h>

int calcTotal(int p, int m, int g){
    int vt;
    vt=p*10+m*12+g*15;

    return vt;
}

int main(){
    int p, m, g, total;
    printf("\nQuantas camisas P vai levar?\n");
    scanf("%i", &p);
    printf("\nQuantas camisas M vai levar?\n");
    scanf("%i", &m);
    printf("\nQuantas camisas G vai levar?\n");
    scanf("%i", &g);

    total= calcTotal(p, m, g);
    printf("\nTotal: %i", total);


    return(0);
}
