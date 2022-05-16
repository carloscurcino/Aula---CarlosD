#include <stdio.h>
#include <stdlib.h>

int CalcOP(char OP, int n1, int n2){
    int R;
    if(OP == '*'){
		R=n1*n2;
	}else{
		if(OP == '/'){
			R=n1/n2;
		}else{
			if(OP == '+'){
				R=n1+n2;
			}else{
				if(OP == '-'){
					R=n1-n2;
				}else{
					printf("\nOperacao invalida!");
				}
			}
		}
	}


    return R;
}

int main(){
	char OP;
	int n1, n2, total;
	printf("Digite um numero!\n");
	scanf("%i", &n1);
	fflush(stdin);
	printf("\nDigite outro numero!\n");
	scanf("%i", &n2);
	fflush(stdin);
	printf("\nQue operacao deseja realizar?\nDigite [*], [/], [-] ou [+] para escolher.\n");
	scanf("%c", &OP);
	fflush(stdin);
	total=CalcOP(OP, n1, n2);
	printf("\nO resultado da sua operacao e: %i %c %i = %i", n1, OP, n2, total);





	return(0);
}
