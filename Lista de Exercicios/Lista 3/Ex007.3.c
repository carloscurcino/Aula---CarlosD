#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(){
    int num1 = 0;
    int numPC = 0;
    int parImpar = 0;



    printf("\t\t\tJOGO PAR OU IMPAR");
    printf("\n\nDigite um numero entre 0-9\n");
    scanf("%d", &num1);
    printf("\nO computador também escolheu um numero");
    printf("\nEscolha [1] para par ou [2] para impar e digite!\n");
    scanf("%i", &parImpar);

    srand(time(0));
    numPC = rand() % 10;

    printf("\nO computador escolheu %i", numPC);
    if(parImpar == 1){
        if(/*parImpar == "1" && */(num1+numPC)%2 == 0 ){
            printf("\nVoce venceu!");
        }else{
            printf("\nVoce perdeu!");
        }
    }else{
        //if(parImpar == 2)
       if(/*parImpar != "par" && */(num1+numPC)%2!= 0){
            printf("\nVoce venceu!");
        }else{
            printf("\nVoce perdeu!");
        }


    }
    getch();
return(0);
}
