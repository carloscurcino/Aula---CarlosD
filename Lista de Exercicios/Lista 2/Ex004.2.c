#include <stdio.h>
#include <stdlib.h>


int main(){
    float a, b, c, d, e, f, x, y;
    printf("\nDigite em ordem os valores da a, b, c, d, e, f!\n");
    scanf("%f, %f, %f, %f, %f, %f", &a, &b, &c, &d, &e,&f);
    printf("%f %f %f %f %f %f", a, b, c, d, e, f);
    //result = EquaLinear(a, b, c, d, e, f);
    x = c*e-b*f/a*e-b*d;
    y =  a*f-c*d/a*e-b*d;
   // x.toFixed(2); Ver como colocar só duas casas decimais.
   // y.toFixed(2);
    printf("\nResultado: %f, %f", x, y);



    return(0);
}
