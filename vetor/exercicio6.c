#include <stdio.h>
int main(){
    int A[10], maior, menor;
    printf("escreva um valor:/n");
    scanf("%d",&A[0]);
    maior=A[0];
    menor=A[0];
    for(int cont=1; cont<10; cont++){
        printf("digite 9 numeros:/n");
        scanf("%f",&A[cont]);
        if(maior<A[cont]){
            maior=A[cont];
        }
        if(menor>A[cont]){
            menor=A[cont];
        }
    }
        printf("o menor valor e: %d, e o maior valor e: %d/n",menor,maior);
    return 0;
}