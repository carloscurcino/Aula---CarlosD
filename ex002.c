#include <stdio.h>
#include <math.h>
/*Área do retangulo*/
int AreaRet(int a, int b){
	int Area;
	Area = a*b;
	return(Area);
};
int main() {
	int base = 0;
	int alt = 0;
	printf("Digite o valor da base\n");
	scanf("%i", &base);
	if(base <= 0){
		printf("Apenas numeros positivos");
	}
	printf("\nDigite o valor da altura\n");
	scanf("%i", &alt);
	
	if(alt <= 0) {
		printf("Apenas numeros positivos");
	}
	printf("A area do retangulo e: %i", AreaRet(base, alt));
}
