#include <stdio.h>
int main(){
	int A[10],posi,maior;
	printf("Digite os valores do conjunto:\n");
	for(int i=0;i<10;i++){
		printf("posicao %d\n", i+1);
		scanf("%d",&A[i]);
    }
    maior=A[0];
    for(int i=0;i<10;i++){
    	if(maior<A[i]){
    		maior=A[i];
    		posi=i;
		}
    }
	printf("\nO maior valor do conjunto e:%d, e se encontra na posicaso:%d\n",maior,posi+1);
	getchar();
	getchar();
	return 0;
}