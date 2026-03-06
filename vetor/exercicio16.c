#include <stdio.h>
int main(){
    int A[10], B[10], C[10],auxA,auxB;
    for(int cont=0;cont<10;cont++){
        printf("digite 10 valores:/n");
        scanf("%d", &A[cont]);
    }
    for(int cont=0;cont<10;cont++){
        printf("digite 10 valores:/n");
        scanf("%d",&B[cont]);
    }
    for(int con=0;con<10;con++){
        auxA=A[con];
        for(int chec=0;chec<10;chec++){
            auxB=B[chec];
            if(auxA!=auxB){
                C[con]=auxA;
                    }
                }
            }
    return 0;
}