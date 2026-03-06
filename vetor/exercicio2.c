#include <stdio.h>
int main(){
    int B[6];
    
    for(int cont=0;cont<6; cont++){
        printf("digite 6 numeros inteiros:/n");
        scanf("%d",&B[cont]);
        printf("%dº",cont,"%d",B[cont]);
    }
    return 0;
}