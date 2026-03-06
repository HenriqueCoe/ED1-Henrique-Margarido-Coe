#include <stdio.h>
int main(){
    int A[6],par, impar, soma=0, quant=0;
    for(int cont=1;cont<6;cont++){
        printf("digite os numeros:/n");
        scanf("%f",&A[cont]);

        if(A[cont]%2==0){
            printf("numero par:%d/n", A[cont]);
            soma+=A[cont];
        }
        if(A[cont]%2==1){
            printf("numero impar:%d/n", A[cont]);
            quant++;
        }
        }   
    printf("A soma dos pares e:%d, ja a quantidade de impares e:%d/n", soma, quant);
    return 0;
}