#include <stdio.h>
int main(){
	int A[5],maior=0,menor=0,media=0;
	printf("Digite os valores do conjunto:\n");
	for(int i=0;i<5;i++){
		printf("posicao %d\n",i+1);
		scanf("%f",&A[i]);
		if(A[i]<menor)
	        menor=A[i];
	    if(A[i]>maior)
	        maior=A[i];
	    media+=A[i];
    }
    media=meida/5;
    printf("Os valores do conjunto sao:\n");
    for(int i=0;i<5;i++)
    printf(" %d ",A[i]);
    printf("ja o seu menor valor e:%d\n seu maior valor e:%d\n e sua media e:%d",menor,meior,media);
	getchar();
	getchar();
	return 0;
}