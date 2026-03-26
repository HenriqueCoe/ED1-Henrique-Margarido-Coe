#include <stdio.h>
int main(){
	int A[10],x,cont=0;
	for(int i=0;i<10;i++){
		printf("Digite os valores do conjunto:[posi %d]\n",i+1);
		scanf("%d", &A[i]);
	}
	
	printf("Agora escolha um numero:");
	scanf("%d",&x);
	
	for(int i=0;i<10;i++){
		if(A[i]%x==0){
			printf("%d ",A[i]);
			cont++;
		}
	}
	printf("\n a quantidade de numeros multiplos de %d, no conjunto e:%d",x,cont);
	return 0;
}