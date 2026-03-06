#include <stdio.h>
int main(){
    int A[5], B[5], soma[5], mult[5], dif[5], inter[5], uni[5],auxA,auxB;
    for(int cont=0;cont<5;cont++){
        printf("digite 5 valores diferentes:/n");
        scanf("%d", &A[cont]);
    }
    for(int cont=0;cont<5;cont++){
        printf("digite 5 valores diferentes:/n");
        scanf("%d",&B[cont]);
    }
    for(int cont=0;cont<5;cont++){
        soma[cont]= A[cont]+B[cont];
    }
    for(int cont=0;cont<5;cont++){
        mult[cont]= A[cont]*B[cont];
    }
    for(int con=0;con<5;con++){
        auxA=A[con];
        for(int chec=0;chec<5;chec++){
            auxB=B[chec];
            if(auxA!=auxB){
                dif[con]=auxA;
                    }
                }
            }
    for(int con=0;con<5;con++){
        auxA=A[con];
        for(int chec=0;chec<5;chec++){
            auxB=B[chec];
            if(auxA==auxB){
                inter[con]=auxA;
            }
        }
    }        
    for(int con=0;con<5;con++){
        auxA=A[con];
        for(int chec=0;chec<5;chec++){
            auxB=B[chec];
            if(auxA!=auxB){
                uni[con]=auxA;
            }
        }
    }
    for(int con=0;con<5;con++){
        printf("A soma dos conjuntos:%d/n", soma[con]);
    }
    for(int con=0;con<5;con++){
        printf("A mult do conjunto:%d/n",mult[con]);
    }
    for(int con=0;con<5;con++){
        printf("A diferenca entre os conjuntos:%d/n", dif[con]);
    }
    for(int con=0;con<5;con++){
        printf("A inter entresecao os conjuntos:%d/n", inter[con]);
    }
    for(int con=0;con<5;con++){
        printf("A uniao entre os conjuntos:%d/n", uni[con]);
    }
    return 0;
}