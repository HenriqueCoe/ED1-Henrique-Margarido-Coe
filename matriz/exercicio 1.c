#include <stdio.h>
int main(){
    int mat[3][3], soma=0, lin, col;
    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
            printf("Digite os valores da matriz(pos %d,%d)\n",lin,col);
            scanf("%d",&mat[lin][col]);
        }
    }

    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
            if(mat[lin][col] %2!=0){
               soma+= mat[lin][col];
            }
        }
    }
    
    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
            printf("%d", mat[lin][col]);
        }
        printf("\n");
    }
    printf("A soma dos impares: %d", soma);
    getchar();
    getchar();
    return 0;
}
