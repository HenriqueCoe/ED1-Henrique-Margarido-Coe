#include <stdio.h>
int main(){
    float A[8];
    int pos1,pos2;
    for(int cont=0; cont<8; cont++){
        printf("digite 8 numeros:/n");
        scanf("%f",&A[cont]);
    }
    printf("Escolha a primeira posicao:/n");
    scanf("%d",&pos1);
    printf("Escolha a segunda posicao:/n");
    scanf("%d",&pos2);

    printf("a soma dos valores e:%.2f/n",A[pos1]+A[pos2]);
    return 0;
}