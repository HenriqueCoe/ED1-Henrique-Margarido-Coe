#include <stdio.h>
void Preenchimento(int V[]){
	for(int i=0;i<10;i++){
		printf("Escreva os elementos do conjunto:[posi %d]",i+1);
		scanf("%d", &V[i]);
	}
}
int main (){
	int A[10], B[10], C[10], D[10], chec=0, cont=0, tam=0;
	
	Preenchimento(A);
	Preenchimento(B);
	
	for(int i=0;i<10;i++){
		for(int k=0;k<10;k++){
			if(A[i]==B[k]){
				C[cont]=A[i];
				cont++;
			}
		}
	}
	tam=cont;
	cont=0;
	
	for(int i=0;i<tam;i++){
		chec=0;
		for(int k=0; k<i;k++){
			if(C[i]==C[k]){
			    chec=1;
			    break;
		    }
		}
		if(chec==0){
			D[cont]= C[i];
			cont++;
		}
	}
	return 0;
}