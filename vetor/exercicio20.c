#include <stdio.h>
int main(){
    int A[10], par[10],impar[10];
    for(int con=0;con<10;con++){
        printf("escolha 10 numeros inteiros:/n");
        scanf("%d",&A[con]);

        if(A[con]%2==0){
            par[con]=A[con];
        }
        if(A[con]%2==1){
            impar[con]=A[con];
        }
        if(A[con]==0){
            par[con]=A[con];
        }
    }
    for(int con=0;con<10;con++){
        printf("conjunto par e:%d/n", par[con]);
    }
    for(int con=0;con<10;con++){
        printf("conjunto impa e:%d/n", impar[con]);
    }
    return 0;
}