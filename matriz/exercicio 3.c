#include <stdio.h>
int main(){
    int lin,col;
    float mat[3][4],somaA=0,somaB=0,somaC=0;
    
    for(lin=0;lin<3;lin++){
                     for(col=0;col<4;col++){
                                      printf("Digite os valores da matriz(posi[%d][%d]\n",lin,col);
                                      scanf("%f",&mat[lin][col]);
                                      }
                     }
    
    printf("Elementos da Matriz\n");
    for(lin=0;lin<3;lin++){
                     for(col=0;col<4;col++){
                                      printf(" %.2f ", mat[lin][col]);
                                     }
                     printf("\n");
                    }
    
    for(col=0;col<4;col++)
                   somaA+=mat[0][col];
    for(col=0;col<4;col++)
                   somaB+=mat[1][col];
    for(col=0;col<4;col++)
                   somaC+=mat[2][col];
                   
    printf("soma das linhas:\n");
    printf("linha 0: %.2f\n",somaA);
    printf("linha 1: %.2f\n",somaB);
    printf("linha 2: %.2f\n",somaC);
    
    getchar();
    getchar();
    return 0;
}
