#include <stdio.h>
int main(){
    int A[6],checagem;
    for(int cont=0; cont<6; cont++){
        printf("digite 6 numeros pares:/n");
        scanf("%d",&checagem);
        if(checagem%2==0){
            scanf("%d",&A[cont]);
            cont++;
        }
        cont--;
    }
    for(int cont=6;cont>=0; cont--){
        printf("o conjunto invertido e:%d/n",A[cont]);
    }
    return 0;
}