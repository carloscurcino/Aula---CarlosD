
#include <stdio.h>
#include <stdlib.h>
//REFAZER ESSA MERDA
int CalcLucro(int n1, int n2){
    int r;
    r= n2-n1;
    return r;
}

int main(){
    float PrecoIni=0.0, PrecoVen=0.0, lucro=0.0,pitotal=0.0, pvtotal=0.0, lucrototal=0.0;
    int q10, q20, q21, quantMercadorias, cont;
    cont=0;
    q10=0;
    q20=0;
    q21=0;
    char mercadoria[20];


    printf("Digite quantas mercadorias vai registrar!\n");
    scanf("%d", &quantMercadorias);
    fflush(stdin);
    while(cont < quantMercadorias){
            cont++;
            printf("\nDigite o nome da mercadoria\n");
            scanf("%s", &mercadoria);
            printf("Digite a preco de compra\n");
            scanf("%f", &PrecoIni);
            printf("Digite o preco de venda\n");
            scanf("%f", &PrecoVen);
            lucro=CalcLucro(PrecoIni, PrecoVen);
            printf("Lucro d: %.2f", lucro);
        if(lucro < PrecoIni*10/100){
                q10++;
        }else{
            if(lucro<=PrecoIni*20/100){
                q20++;
            }else{
                q21++;
            }

        }

        pitotal+=PrecoIni;
        pvtotal+=PrecoVen;


    }

    lucrototal=pvtotal-pitotal;
    printf("\n %d mercadorias dao menos de 10 por cento de lucro, %d mercadorias dao menos ou sao igual a 20 por cento de lucro e %d dao mais que 20 por cento de lucro\n", q10, q20, q21);
    printf("O preco inicial total e: %.2f\nO preco de venda total e: %.2f\nO lucro total: %.2f", pitotal, pvtotal, lucrototal);


    return(0);


}
