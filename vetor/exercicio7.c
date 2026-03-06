#include <stdio.h>
int main(){
    int A[10], maior, posicao;
    printf("escreva um valor:/n");
    scanf("%d",&A[0]);
    maior=A[0];
    posicao=0;
    for(int cont=1; cont<10; cont++){
        printf("digite 9 numeros:/n");
        scanf("%f",&A[cont]);
        if(maior<A[cont]){
            maior=A[cont];
            posicao=cont;
        }
    }
    for(int cont=0;cont<10; cont++){
        printf("o conjunto e:%d/n",A[cont]);
    }
    printf("O maior valor e: %d e se encontra na posicao:%dº/n",maior,posicao);
    return 0;
}