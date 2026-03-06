#include <stdio.h>
int main(){
    int A[6];
    for(int cont=0; cont<6; cont++){
        printf("digite 6 numeros:/n");
        scanf("%f",&A[cont]);
    }
    for(int cont=6;cont>=0; cont--){
        printf("o conjunto invertido e:%d/n",A[cont]);
    }
    return 0;
}