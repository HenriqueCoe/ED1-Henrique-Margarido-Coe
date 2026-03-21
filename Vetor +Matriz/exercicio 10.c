#include <stdio.h>
int main(){
	float A[15],media;
	printf("Digite os valores do conjunto:\n");
	for(int i=0;i<15;i++){
		printf("posicao %d\n",i+1);
		scanf("%f",&A[i]);
		media+=A[i];
    }
    media=media/15;
    printf("A media geral dos alunos e:%.2f",media);
	getchar();
	getchar();
	return 0;
}