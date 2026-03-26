#include <stdio.h>
void Preenchimento(int V[]){
	for(int i=0;i<10;i++){
		printf("Escreva os elementos do conjunto:[posi %d]",i+1);
		scanf("%d", &V[i]);
	}
}
int main (){
	int A[10],B[10],C[10];
	
	printf("Conjunto A:\n");
	Preenchimento(A);
	printf("Conjunto B:\n");
	Preenchimento(B);
	
	printf("Conjunto resultante da mistura dos dois conjuntos:\n");
	for(int i=0;i<10;i++){
		if(i%2==0){
			C[i]=A[i];
		}
		if(i%2==1){
			C[i]=B[i];
		}
		printf("%d ",C[i]);
	}
	return 0;
}