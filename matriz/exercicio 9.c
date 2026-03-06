#include <stdio.h>
int main(){
    int mat[3][3],veP[6],veS[6],lin,col,ax;
    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
            printf("Digite os valores da matriz(posi): %d %d\n",lin,col);
            scanf("%d",&mat[lin][col]);
            }
    }
    ax=0;
    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
            if(lin!=col){
               veP[ax]=mat[lin][col];
               ax++;
            }
        }
    }
    ax=0;    
    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
            if((lin+col)!=(3-1)){
                veS[ax]=mat[lin][col];
                ax++;
            }
        }
    }
    printf("Elementos da matriz:\n");   
    for(lin=0;lin<3;lin++){
        for(col=0;col<3;col++){
            printf("%d ",mat[lin][col]);
        }
        printf("\n");
    }
    
    printf("Elementos da matriz que nao fazem parte da diagonal principal:\n");
    for(ax=0;ax<6;ax++){
        printf("%d ",veP[ax]);
    }
    printf("\n");
    printf("Elementos da matriz que nao fazem parte da diagonal secundaria:\n");
    for(ax=0;ax<6;ax++){
        printf("%d ",veS[ax]);
    }
    getchar();
    getchar();
    return 0;
}
