#include <stdio.h>

void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor){
	*maior=array[0];
	*menor=array[0];
	int i;
	
	for(i=0; i<tamanho; i++){
		 if(*maior<array[i]){
		 	*maior=array[i];
		 }
		 if(*menor>array[i]){
		 	*menor=array[i];
		 }
	}
}

int main(){
	int tamanho, numaior, numenor, i;
	
	printf("Escolha o tamanho do vetor:");
	scanf("%d", &tamanho);
	
	int array[tamanho];
	
	for(i=0; i<tamanho; i++){
		printf("posi(%d): ",i+1);
		scanf("%d",&array[i]);
	}
	
	encontrarMaiorMenor (array, tamanho, &numaior, &numenor);
	
	printf("O maior valor e: %d e o menor valor e: %d", numaior, numenor);
	return 0;
}
