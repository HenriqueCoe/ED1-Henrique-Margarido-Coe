#include <stdio.h>
int main(){
    int A[10],cont=0, aux, chec;
    printf("Digite o primeiro valor:/n");
    scanf("%d",&A[0]);
    aux=A[0];
    cont++;
    while(cont<10){
        for(int con=1;con<10;con++){
            printf("Digite 9 valores diferentes:/n");
            scanf("%d",&chec);
                if(aux==chec){
                    con--;
                    printf("Digite outro valor");
                }
                else{
                    A[con]=chec;
                }
            aux=chec;    
        }

    }
    for(int con=0; con<10;con++){
        printf("o conjunto final e:%d/n", A[con]);
    }
    return 0;
}