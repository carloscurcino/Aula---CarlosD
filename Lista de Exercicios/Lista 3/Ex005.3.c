#include <stdio.h>
#include <stdlib.h>

int main(){
    int freq;
    float note;
    char sit[10];
    printf("Digite a frequencia!\n");
    scanf("%i", &freq);
    printf("\nDigite a nota!\n");
    scanf("%f", &note);
    if(freq>100){
        printf("\Invalido!");
    }else{
        if(note>10.0){
            printf("Invalido!");
        }else{
            if(freq>75 && note>=7.0){
                printf("Sua situacao e: Aprovado");
            }else{
                if(freq>=75 && note<=7.0 && note>=3.0){
                    printf("Sua situacao e: Exame");
                }else{
                    printf("Sua situacao e: Reprovado");
                }
            }

        }

    }

    return(0);
}
