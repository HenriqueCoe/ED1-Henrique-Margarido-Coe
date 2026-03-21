#include <stdio.h>
int main(){
	int A[8],X,Y,soma;
	printf("Digite os valores do conjunto:\n");
	for(int i=0;i<8;i++){
		printf("posicao %d\n", i+1);
		scanf("%d",&A[i]);
    }
    printf("Agora escolha duas posicoes no conjunto:(entre 0 a 7)\n");
    scanf("%d%d",&X,&Y);
    if(X<0||X>7){
    	while(X<0||X>7){
    		printf("Posicao invalida escolha outra:\n");
    		scanf("%d",&X);
		}
	}
	if(Y<0||Y>7){
    	while(Y<0||Y>7){
    		printf("Posicao invalida escolha outra:\n");
    		scanf("%d",&Y);
		}
	}
	soma=A[X]+A[Y];
	printf("A soma das duas posicoes e:%d", soma);
	getchar();
	getchar();
	return 0;
}