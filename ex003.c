#include <stdio.h>
#include <math.h>
/*Calcular Distancia*/
float calcDist() {
	float A, B, C, x1, x2, y1, y2;
	x1= 10,2;
	x2= 15,3;
	y1= 13,5;
	y2= 20;
	A = (x2-x1)*(x2-x1);
	B = (y2-y1)*(y2-y1);
	C = sqrt(A+B);
}
int main(){
	printf("A distancia e: %f", calcDist());
}
