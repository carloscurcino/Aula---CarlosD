#include <stdio.h>
#include <stdlib.h>

int main(){
    int aparencia=0, vento=0;
    float umidade;
    printf("Como esta a aparencia do clima?\nDigite [1]para sol, [2]para chuma e [3]para nublado!\n");
    scanf("%d", &aparencia);
    if(aparencia == 3){
        printf("Pode sair!");
    }else{
        if(aparencia==1){
            printf("Esta ensolarado! Mas qual a umidade?\n");
            scanf("%f", &umidade);
            if(umidade <=78.0 ){
                printf("Pode sair!");
            }else{
                 printf("Nao sair!");
            }

        }else{
            if(aparencia==2){
                printf("Chuva com vento?\nDigite [1]para sim e [2] para nao!\n");
                scanf("%d", &vento);
                if(vento=1){
                    printf("Nao sair");
                }else{
                    printf("Pode sair!");
                }
            }
        }

    }
 return 0;

   }
