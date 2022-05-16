#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n1, n2, n3;
    printf("Digite um numero!\n");
    scanf("%i", &n1);
    printf("Digite outro numero!\n");
    scanf("%i", &n2);
    n3=n1+n2;
    if(n3>20){
        printf("%i", n3+8);
    }else{
        printf("%i", n3-5);
    }

    return(0);
}
