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
	
	printf("Conjunto resultante da subtracao dos dois conjuntos:\n");
	for(int i=0;i<10;i++){
		C[i]=A[i]-B[i];
		printf("%d ",C[i]);
	}
	return 0;
}