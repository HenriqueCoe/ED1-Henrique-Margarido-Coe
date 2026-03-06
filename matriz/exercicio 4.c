#include <stdio.h>
int main(){
    int mat[3][3],menor,maior,lin,col;
    
    for(lin=0;lin<3;lin++)
        for(col=0;col<3;col++){
            printf("Digite os valores da matriz:(posi) %d %d\n",lin,col);
            scanf("%d",&mat[lin][col]);
        }
        
    maior=mat[0][0];
    menor=mat[0][0];
    
    for(lin=0;lin<3;lin++)
        for(col=0;col<3;col++){
            if(maior<mat[lin][col]){
               maior=mat[lin][col];
            }
            if(menor>mat[lin][col]){
               menor=mat[lin][col];
            }
        }
    printf("matriz\n");
    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
            printf("%d ", mat[lin][col]);
        }
        printf("\n");
    }
    
    printf("maior elemento da matriz:%d\n",maior);
    printf("menor elemento da matriz:%d\n",menor);
    getchar();
    getchar();
    return 0;
}
