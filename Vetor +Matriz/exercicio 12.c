#include <stdio.h>
int main(){
	int A[5],maior,menor,media=0;
	printf("Digite os valores do conjunto:\n");
	scanf("%d",&A[0]);
	maior=A[0];
	menor=A[0];
	media=A[0];
	for(int i=1;i<5;i++){
		printf("posicao %d\n",i+1);
		scanf("%d",&A[i]);
		if(A[i]<menor)
	        menor=A[i];
	    if(A[i]>maior)
	        maior=A[i];
	    media+=A[i];
    }
    media=media/5;
    printf("Os valores do conjunto sao:\n");
    for(int i=0;i<5;i++)
    printf(" %d ",A[i]);
    printf("\nJa o seu menor valor e:%d\n seu maior valor e:%d\n e sua media e:%d",menor,maior,media);
	getchar();
	getchar();
	return 0;
}