#include <stdio.h>
int main(){
    float A[10],contador=0,soma=0;
    for(int cont=0;cont<10;cont++){
        printf("digite 10 numeros:/n");
        scanf("%f",&A[cont]);

        if(A[cont]>0){
            soma+=A[cont];
        }
        if(A[cont]<0){
            contador++;
        }
    }
    printf("Soma dos positivos e:%.2f, ja a quantidade de negativos e:%.2f/n",soma,contador);
    return 0;
}