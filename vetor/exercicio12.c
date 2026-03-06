#include <stdio.h>
int main(){
    float A[5],maior,menor, media=0;
    printf("digite um valor:/n");
    scanf("%f",&A[0]);
    maior= A[0];menor= A[0];

    for(int cont=1;cont<5;cont++){
        printf("digite os proximos numeros:/n");
        scanf("%f",&A[cont]);

        if(A[cont]>maior){
            maior= A[cont];

        }
        if(A[cont]<menor){
            menor= A[cont];
        }
        media+=A[cont];   
    }
    for(int cont=0;cont<5;cont++){
        printf("%.2f/n",A[cont]);
    }
    printf("o maior valor e:%.2f, o menor e:%.2f, a media e:%.2f/n",maior, menor, media);
    return 0;
}