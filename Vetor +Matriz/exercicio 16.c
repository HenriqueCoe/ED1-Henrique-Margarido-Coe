#include <stdio.h>
int main(){
	int chec;
	float A[5];
	for(int i=0;i<5;i++){
		printf("Digite os valores do conjunto:[posi %d]\n",i+1);
		scanf("%f", &A[i]);
	}
	printf("Agora escolha a ordem(1-direta/2-inversa)\n");
	scanf("%d",&chec);
	switch(chec){
		case(1):
		    for(int i=0;i<5;i++){
			    printf("%.2f ",A[i]);
		    }
		    break;
		case(2):
		    for(int i=4;i>-1;i--){
			    printf("%.2f ",A[i]);
		    }
		    break;
		case(0):
			break;
		default:
			printf("codigo invalido");
			break;
	}
	return 0;
}