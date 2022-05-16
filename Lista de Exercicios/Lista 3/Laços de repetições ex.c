
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tabuada,i;
    i = 1;
    printf("\t\t\tTabuada do %i\t\t\t", tabuada);
    printf("\nEscolha que tabuada deseja!\n");
    scanf("%i", &tabuada);

    /*while(i<=10){
        printf("%i x %i = %i\n", tabuada, i, tabuada*i);
        i++;
    }*/

    /*do{
        printf("%i x %i = %i\n", tabuada, i, tabuada*i);
        i++;
    }while(i<=10);*/

    for(int i=1; i<=10; i++){
        printf("%i x %i = %i\n", tabuada, i, tabuada*i);
    }



    return(0);
}
