#include <stdio.h>
#include <stdlib.h>

int SeparaNum(int NumX){
    int R, n1, n2, n3, n4;
    n1=NumX/1000;
    n2=(NumX%1000)/100;
    n3=(NumX%1000)%100/10;
    n4=((NumX%1000)%100)%10;
    printf("%d, %d, %d, %d", n1, n2, n3, n4);
    R= RearranjaNum(n1, n2, n3,n4);
    return R;
}
int RearranjaNum(int a, int b, int c, int d){
    int e,x; //variável de auxilio
    if(b>a){
        e=a;
        a=b;
        b=e;
    }
    if(c>a){
        e=a;
        a=c;
        c=e;
    }
    if(d>a){
        e=a;
        a=d;
        d=e;
    }
    if(c>b){
        e=b;
        b=c;
        c=e;
    }
    if(d>b){
        e=b;
        b=d;
        d=e;
    }
    if(d>c){
        e=c;
        c=d;
        d=e;
    }
    x=a*1000+b*100+c*10+d;
    return x;
}
int main(){
    int NumX, NumMax;
    printf("Digite um numero de 4 algarismos!\n");
    scanf("%d", &NumX);
    NumMax = SeparaNum(NumX);
    printf("\nEsse e o numero maximo formado por esses algarismos: %d", NumMax);



    return(0);
}
