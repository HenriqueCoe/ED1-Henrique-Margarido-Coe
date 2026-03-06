#include <stdio.h>
int main(){
    float A[10], Res[10];
    for(int cont=0; cont<10; cont++){
        printf("digite 10 numeros:/n");
        scanf("%f",&A[cont]);
        Res[cont]= A[cont]*A[cont];
    }
    for(int cont=0;cont<10;cont++){
    printf("%.2f e o quadrado desse conjunto e:%.2f/n",A[cont], Res[cont]);
    }
    return 0;
}