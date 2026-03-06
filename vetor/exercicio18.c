#include <stdio.h>
const int aux=0;
int main(){
    int A[15];
    for(int cont=0;cont<15;cont++){
        printf("digite 15 valores:/n");
        scanf("%d", &A[cont]);
    }
    for(int cont=0;cont<15;cont++){
        if(A[cont]==aux){
            for(int chec=cont+1;chec<15;chec++){
                A[cont]=chec--;
            }
        }
    }
    return 0;
}