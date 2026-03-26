#include <stdio.h>
void Preenchimento(float V[]){
	for(int i=0;i<5;i++){
		printf("Escreva os elementos do conjunto:[posi %d]",i+1);
		scanf("%f", &V[i]);
	}
}
int main (){
	float A[5],B[5],C[5];
	printf("Conjunto A:\n");
	Preenchimento(A);
	printf("Conjunto B:\n");
	Preenchimento(B);
	
	printf("Conjunto A:\n");
	for(int i=0;i<5;i++)
		printf("%.2f ",A[i]);
		
	printf("conjunto B:\n");
	for(int i=0;i<5;i++)
	    printf("%.2f ",B[i]);
	    
	printf("Conjunto resultante da mult dos dois conjuntos:\n");
	for(int i=0;i<5;i++){
		C[i]=A[i]*B[i];
		printf("%.2f ",C[i]);
	}
	return 0;
}