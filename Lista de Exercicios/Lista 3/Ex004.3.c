
#include <stdio.h>
#include <stdlib.h>

int main(){
    char OPR;
    int n1, n2;
    printf("Digite um numero!\n");
	scanf("%i", &n1);
	fflush(stdin);
	printf("\nDigite outro numero!\n");
	scanf("%i", &n2);
	fflush(stdin);
	printf("\nQue operacao deseja realizar?\nDigite [<], [>], [=] ou [!] para escolher.\n");
	scanf("%c", &OPR);
	fflush(stdin);
    if(OPR == '>'){
        if(n1>n2){
            printf("\n%i maior que %i", n1, n2);
        }else{
             printf("\n%i nao e maior que %i", n1, n2);
        }

	}else{
		if(OPR == '<'){
            if(n1<n2){
                printf("\n%i menor que %i", n1, n2);
            }else{
                printf("\n%i nao e menor que %i", n1, n2);
            }

		}else{
			if(OPR == '='){
                if(n1=n2){
                    printf("\n%i igual a %i", n1, n2);
                }else{
                    printf("\n%i nao e igual a %i", n1, n2);
                }

			}else{
				if(OPR == '!'){
                    if(n1!=n2){
                        printf("\n%i diferente de %i", n1, n2);
                    }else{
                        printf("\n%i nao e diferente de %i", n1, n2);
                    }

				}else{
					printf("\nOperacao invalida!");
				}
			}
		}
	}





    return(0);
}
