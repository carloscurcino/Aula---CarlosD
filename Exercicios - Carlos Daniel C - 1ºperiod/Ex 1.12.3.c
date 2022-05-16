#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\t\t\tTabela de Farenheit para Centigrados!\t\t\t");
    int c, f;
    c=0;
    f=0;
    for(int i = 50; i<=150; i++){
        f=i;
        c = 5*(f-32)/9;
        printf("\n%d Graus Farenheit -------> %d Graus Centigrados\n", f, c);
    }

    return(0);
}
