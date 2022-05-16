#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
	char OP;
	int n1, n2, R;
	printf("\nEscolha que operacao deseja realizar?\nDigite [*], [/], [-], [+] ou [q] para sair.\n");
	scanf("%c", &OP);
	fflush(stdin);
	printf("Digite um numero!\n");
	scanf("%i", &n1);
	fflush(stdin);
	printf("\nDigite outro numero!\n");
	scanf("%i", &n2);
	fflush(stdin);
	
	while(OP != 'q'){
		if(OP != 'q'){
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
		printf("\nO resultado da sua operacao e: %i %c %i = %i", n1, OP, n2, R);
			
			
		}
	
	
		
	}
	
	
	
	
	
	return(0);
}
	
		
	
	

