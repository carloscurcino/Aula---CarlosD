#include <stdio.h>
#include <math.h>
int NumAnt(int a){	
	int ant;
	ant = a - 1;
	return(ant);
}
int main() {
	int num = 0;
	printf("Digite um numero\n");
	scanf("%i", &num);
	if(num <= 0){
		printf("\nDigite apenas numeros positivos");
	};
	printf("\nO numero anterior e: %i", NumAnt(num));
	
}
