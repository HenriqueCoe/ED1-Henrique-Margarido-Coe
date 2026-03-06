#include <stdio.h>
int main(){
    int mat[4][4],ve[4],lin,col;
    
    for(lin=0;lin<4;lin++)
        for(col=0;col<4;col++){
            printf("Digite os elementos da matriz:(posi) %d %d\n",lin,col);
            scanf("%d",&mat[lin][col]);
        }
        
    for(lin=0;lin<4;lin++)
       for(col=0;col<4;col++){
           if((lin+col)==(4-1)){
              ve[lin]=mat[lin][col];
           }
       }
       
    printf("elementos da matriz:\n");
    for(lin=0;lin<4;lin++){
       for(col=0;col<4;col++){
           printf("%d ",mat[lin][col]);
       }
       printf("\n");
    }
    printf("os elementos da diagonal secundaria sao:\n");
    for(lin=0;lin<4;lin++)
        printf(" %d ",ve[lin]);
    getchar();
    getchar();
    return 0;
}
