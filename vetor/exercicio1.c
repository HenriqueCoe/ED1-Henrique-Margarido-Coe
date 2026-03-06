#include <stdio.h>
int main(){
    int A[6],soma;
    A[0]=1;A[1]=0;A[2]=5;A[3]=-2;A[4]=-5;A[5]=7;
    
    soma= A[0]+ A[1]+A[5];
    printf("a soma e:%d/n",soma);

    A[3]=100;

    for(int cont=0;cont<6; cont++){
        printf("%d/n",A[cont]);
    }
    return 0;
}