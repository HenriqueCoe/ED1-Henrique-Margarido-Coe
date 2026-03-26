#include <stdio.h>
int main (){
	int A[10];
	for(int i=0;i<10;i++){
		printf("Escolha os valores do conjunto:[posi%d] ", i+1);
		scanf("%d", &A[i]);
	}
	printf("Os valores primos do conjunto sao:\n");
	for(int i=0;i<10;i++){
		if(A[i]!=1){
			if(A[i]%1==0 && A[i]%A[i]==0){
			printf(" Numero primo %d\n Na posicao: %d\n ", A[i], i+1);	
			}
		}
	}
	return 0;
}