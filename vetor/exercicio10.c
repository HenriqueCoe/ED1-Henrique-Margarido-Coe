#include <stdio.h>
int main(){
    float A[15],media=0;
    for(int cont=0; cont<15; cont++){
        printf("digite as notas dos alunos:/n");
        scanf("%f",&A[cont]);
        media+=A[cont];
    }
    media=media/15;
    printf("media geral e:%.2f/n",media);
    return 0;
}