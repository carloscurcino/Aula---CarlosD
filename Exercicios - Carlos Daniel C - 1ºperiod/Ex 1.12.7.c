#include <stdio.h>
#include <stdlib.h>

float PercentAusent(int tur, int pres){
    int percent;
    percent=pres*100/tur;

    return percent;
}

int Maisde5(float A){
    int r=0;
    if(A>5){
        r++;
    }
    return r;
}

int main(){
    int i=0, t=0, qalunos=0,ausencia=0, presetes=0, NumMat=0, qmais5=0;
    char turma, presAus='a';
    float A=0.0, B=0.0,C=0.0, D=0.0, E=0.0, F=0.0, G=0.0, H=0.0, I=0.0, J=0.0, K=0.0, L=0.0, M=0.0, N=0.0;


    while(i<14){
        i++;
        printf("Qual turma?\n");
        fflush(stdin);
        scanf("%c", &turma);
        if(turma == 'A'){
            printf("Essa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("\nDigite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("\nHouveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            A=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(A);
            ausencia=0;
        }else{
            if(turma == 'B'){
            printf("Essa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("Digite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("\nHouveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            B=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(B);
            ausencia=0;
        }else{
            if(turma == 'C'){
            printf("\nEssa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("\nDigite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("Houveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            C=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(C);
            ausencia=0;
        }else{
            if(turma == 'D'){
            printf("\nEssa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("Digite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("\nHouveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            D=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(D);
            ausencia=0;
        }else{
            if(turma == 'E'){
            printf("\nEssa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("\nDigite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("\nHouveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            E=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(E);
            ausencia=0;
        }else{
            if(turma == 'F'){
            printf("\nEssa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("\nDigite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("\nHouveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            F=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(F);
            ausencia=0;
        }else{
         if(turma == 'G'){
            printf("\nEssa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("\nDigite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("\nHouveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            G=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(G);
            ausencia=0;
        }else{
            if(turma == 'H'){
            printf("\nEssa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("\nDigite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("\nHouveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            H=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(H);
            ausencia=0;
        }else{
            if(turma == 'I'){
            printf("\nEssa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("\nDigite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("\nHouveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            I=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(I);
            ausencia=0;
        }else{
            if(turma == 'J'){
            printf("\nEssa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("znDigite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("Houveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            J=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(J);
            ausencia=0;
        }else{
            if(turma == 'K'){
            printf("Essa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("Digite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("Houveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            K=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(K);
            ausencia=0;
        }else{
            if(turma == 'L'){
            printf("Essa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("Digite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("Houveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            L=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(L);
            ausencia=0;
        }else{
        if(turma == 'M'){
            printf("\nEssa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("\nDigite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("\nHouveram %d faltas e vieram %d alunos\n",ausencia, presetes);
            M=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(M);
            ausencia=0;
        }else{
            if(turma == 'N'){
            printf("\nEssa turma tem quantos alunos?\n");
            scanf("%d", &qalunos);
            while(t<qalunos){
                t++;
                printf("\nDigite o numero de matricula do aluno!\n");
                scanf("%d", &NumMat);
                printf("\nO aluno estava presente(digite p)ou ausente(digite a)?\n");
                fflush(stdin);
                scanf("%c", &presAus);
                if(presAus == 'a'){
                    ausencia++;
                }else{
                    ausencia+=0;
                }
            }
            t=0;
            presetes=qalunos-ausencia;
            printf("Houveram %d faltas e vieram %d alunos",ausencia, presetes);
            N=PercentAusent(qalunos, ausencia);
            qmais5+=Maisde5(N);
            ausencia=0;
        }
    }

    }

    }

    }

    }
    }
    }
    }
    }
    }
    }

    }
    }
    }

    printf("Porcentagem de ausentes da turma A: %.2f\n", A);
    printf("Porcentagem de ausentes da turma B: %.2f\n", B);
    printf("Porcentagem de ausentes da turma C: %.2f\n", C);
    printf("Porcentagem de ausentes da turma D: %.2f\n", D);
    printf("Porcentagem de ausentes da turma E: %.2f\n", E);
    printf("Porcentagem de ausentes da turma F: %.2f\n", F);
    printf("Porcentagem de ausentes da turma G: %.2f\n", G);
    printf("Porcentagem de ausentes da turma H: %.2f\n", H);
    printf("Porcentagem de ausentes da turma I: %.2f\n", I);
    printf("Porcentagem de ausentes da turma J: %.2f\n", J);
    printf("Porcentagem de ausentes da turma K: %.2f\n", K);
    printf("Porcentagem de ausentes da turma L: %.2f\n", L);
    printf("Porcentagem de ausentes da turma M: %.2f\n", M);
    printf("Porcentagem de ausentes da turma N: %.2f\n", N);
    printf("\n\nQuantidade de turmas com ausencia maior que 5 por cento: %d", qmais5);


    //ENQUANTO SEI LÁ MENOR QUE 14 FAÇA:

    //QUAL TURMA? IF A  ENTÃO SE NAO B COM OS MESMOS PARAMETROS...ATÉ N
    //QUANTOS ALUNOS??  A=QALUNOS
    //WHILE I < QALUNOS; NÚMERO DE MATRICULA DO ALUNO?
    //AUSENTE OU PRESENTE; SE P ENTÃO P++ SE NÃO A++
    //FUNÇÃO QUE CALCULA PORCENTAGEM DE ALUNOS AUSENTES DE CADA TURMA; QALUNOS*P/100


    return(0);
}
