#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d;
    printf("Digite 4 valores!\n");
    scanf("%i, %i, %i, %i", &a, &b, &c, &d);
    if((b>c) && (d>a) && (c+d)>(a+b) && (c>0) && (d>0) && (a%2==0)){
        printf("\nValores aceitos!");
    }else{
        printf("\nValores nao aceitos");
    }


    return(0);
}
