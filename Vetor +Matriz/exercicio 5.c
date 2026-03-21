#include <stdio.h>
int main(){
	int A[10],par=0;
	printf("Digite os valores do conjunto:\n");
	for(int i=0;i<10;i++){
		printf("posicao %d\n", i+1);
		scanf("%d",&A[i]);
    }
    for(int i=0;i<10;i++){
    	if(A[i]%2==0){
    		par++;
		}
    }
	printf("A quantidade de valores pares no conjunto sao:%d",par);
	getchar();
	getchar();
	return 0;
}