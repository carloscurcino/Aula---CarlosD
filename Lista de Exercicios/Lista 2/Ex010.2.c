#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int SomaImpar(int n1, int n2, int n3, int n4, int n5){
    int soma;
    soma = n1* (n1%2);
    soma=soma+ n2*(n2%2);
    soma=soma+ n3*(n3%2);
    soma=soma+ n4*(n4%2);
    soma=soma+ n5*(n5%2);

    return soma;
}

int main(){
    int num1, num2, num3, num4, num5;
    int soma;
    printf("Digite 5 numeros distintos!\n");
    scanf("%i, %i, %i, %i, %i", &num1, &num2, &num3,&num4, &num5);
    printf("%i, %i, %i, %i, %i", num1, num2, num3, num4, num5);
    soma= SomaImpar(num1, num2, num3, num4, num5);
    printf("\nO resultade e: %i", soma);



    return(0);
}
