#include <stdio.h>
int main (){
	int A[10], pMenor, pMaior;
	float B[10], menor, maior;
	
	for(int i=0;i<10;i++){
		printf("Escreva o codigo do [%d]Aluno:",i);
		scanf("%d",&A[i]);
		printf("Agora escreva a altura do aluno:Aluno numero [%d]",i);
		scanf("%f",&B[i]);
	}
	menor=B[0];
	maior=B[0];
	for(int i=0;i<10;i++){
		if(menor>B[i]){
			menor=B[i];
			pMenor=i;
		}
		if(maior<B[i]){
			maior=B[i];
			pMaior=i;
		}
	}
	printf("O maior aluno e o numero: %d e sua altura e: %.2f\n", A[pMaior], maior);
	printf("O menor aluno e o numero: %d e sua altura e: %.2f\n", A[pMenor], menor);
	return 0;
}