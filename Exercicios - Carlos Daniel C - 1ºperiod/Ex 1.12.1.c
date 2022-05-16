#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vezes = 0;
    float media = 0;
    int idade=0;
    int soma=0;
    do{
        printf("Digite uma idade!\n");
        scanf("%d", &idade);
        soma=soma+idade;
        vezes++;
    }while(idade!=0);
    media = soma/(vezes-1);
    printf("A media das idade e: %.2f", media);

   /*for(int age; age != 0; idade+=age){
        printf("Digite uma idade!\n");
        scanf("%d", &age);
        vezes++;
    }
    media = idade/(vezes-1);*/

    return 0;
}
