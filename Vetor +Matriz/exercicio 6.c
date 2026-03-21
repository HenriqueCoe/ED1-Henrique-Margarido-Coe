#include <stdio.h>
int main(){
	int A[10],menor,maior;
	printf("Digite os valores do conjunto:\n");
	for(int i=0;i<10;i++){
		printf("posicao %d\n", i+1);
		scanf("%d",&A[i]);
    }
    maior=A[0];
    menor=A[0];
    for(int i=0;i<10;i++){
    	if(maior<A[i]){
    		maior=A[i];
		}
		if(menor>A[i]){
		    menor=A[i];
		}
    }
	printf("\nO maior valor do conjunto e:%d, e o menor conjunto e:%d\n",maior,menor);
	getchar();
	getchar();
	return 0;
}