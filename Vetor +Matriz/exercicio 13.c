#include <stdio.h>
int main(){
	int A[5],maior,menor,posiMa,posiMe;
	printf("Digite os valores do conjunto:\n");
	scanf("%d",&A[0]);
	maior=A[0];
	menor=A[0];
	for(int i=1;i<5;i++){
		printf("posicao %d\n",i+1);
		scanf("%d",&A[i]);
		if(A[i]<menor){
	        menor=A[i];
	        posiMe=i;
	    }
	    if(A[i]>maior){
	    	maior=A[i];
	        posiMa=i;
	    }
    }
    printf("\nA posicao do menor valor e:%d\nA posicao do maior valor e:%d",posiMe+1,posiMa+1);
	getchar();
	getchar();
	return 0;
}