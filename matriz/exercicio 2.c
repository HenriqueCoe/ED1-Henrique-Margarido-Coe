#include <stdio.h>
int main(){
    int mat[4][4],lin, col,somaA=0,somaB=0,somaC=0,somaD=0;
    for(lin=0;lin<4;lin++){
            for(col=0;col<4;col++){
                    printf("Digite o valores da matriz(posi:[%d][%d]\n",lin,col);
                    scanf("%d",&mat[lin][col]);
            }
    }
    printf("matriz:\n");
    for(lin=0;lin<4;lin++){
            for(col=0;col<4;col++){
                    printf("%d",mat[lin][col]);
            }
            printf("\n");
    }
    
    for(lin=0;lin<4;lin++)
            somaA+= mat[lin][0];
            
    for(lin=0;lin<4;lin++)
            somaB+= mat[lin][1];
            
    for(lin=0;lin<4;lin++)
            somaC+= mat[lin][2];
    
    for(lin=0;lin<4;lin++)
            somaD+= mat[lin][3];
            
    printf("soma das colunas:\n");
    printf("coluna 0:%d\n", somaA);
    printf("coluna 1:%d\n", somaB);
    printf("coluna 2:%d\n", somaC);
    printf("coluna 3:%d\n", somaD);           
    getchar();
    getchar();
    return 0;
}
