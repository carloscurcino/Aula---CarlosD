
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
    if(a>b & a>c & a>d){
        a=a*1000;
    }else{
        if(b>a& b>c & b>d){
            b=b*1000;
        }else{
            if(c>a & c>b &c>d){
                c=c*1000;
            }else{
                if(d>a & d>b & d>c){
                    d=d*1000;
                }
            }
        }

    }
    //Teste segundo alg
    if(b<a & b>c & b>d){
        b=b*100;
    }else{
        if(c<a & c>b & c>d){
            c=c*100;
        }else{
            if(d<a & d>b & d>c){
                d=d*100;
            }else{
                a=a*100;
            }
        }
    }
    //teste terceiro alg
    if(a>b & b<c & b>d){
        b=b*10;
    }else{
        if(a>c & c<b & c>d){
            c=c*10;
        }else{
            if(a>d & d<b &d>c){
                d=d*10;
            }else{
                a=a*10;
            }
        }
    }


    printf("\n%d, %d, %d, %d", a, b, c, d);
    x=a+b+c+d;
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
