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
    for(int cont=0;cont<10;cont++){
        auxA=A[cont];
        for(int cont=0;cont<10;cont++){
            auxB=B[cont];
        }
        if(auxA==auxB){
            for(int con=0;con<10;con++){
                for(int chec=con+1;chec<10;chec++){
                    if(con!=chec){
                    C[cont]=auxA;
                    }
                }
            }
        }
    }
    return 0;
}