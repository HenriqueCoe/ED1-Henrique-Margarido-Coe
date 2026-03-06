#include <stdio.h>
int main(){
    float A[5],maior,menor;
    int posiMa= 0,posiMe= 0;
    printf("digite um valor:/n");
    scanf("%f",&A[0]);
    maior= A[0];menor= A[0];

    for(int cont=1;cont<5;cont++){
        printf("digite os proximos numeros:/n");
        scanf("%f",&A[cont]);

        if(A[cont]>maior){
            maior= A[cont];
            posiMa= cont;

        }
        if(A[cont]<menor){
            menor= A[cont];
            posiMe= cont;
        }   
    }
    printf("o maior valor e:%.2f, se encontra na posicao:%d o menor e:%.2f, se encontra na posicao:%d/n",maior, posiMa, menor, posiMe);
    return 0;
}