#include <stdio.h>
int main (){
    int mat[4][4],ve[6],lin,col,ax;
    
    for(lin=0;lin<4;lin++)
        for(col=0;col<4;col++){
            printf("Digite os valores da matriz(posi): %d %d \n",lin,col);
            scanf("%d",&mat[lin][col]);
        }

   printf("valores da matriz:\n");
   for(lin=0;lin<4;lin++){
       for(col=0;col<4;col++){
           printf(" %d ", mat[lin][col]);
       }
       printf("\n");
   }
   ax=0;
   
   for(lin=0;lin<4;lin++){
       for(col=0;col<4;col++){
           if(lin<col){
              ve[ax]=mat[lin][col];
              ax++;
           }
       }
   }
   printf("os valores do triangulo superior a diagonal sao:\n");
   for(ax=0;ax<6;ax++)
      printf("%d ",ve[ax]);
   
   getchar();
   getchar();
   return 0;
}
