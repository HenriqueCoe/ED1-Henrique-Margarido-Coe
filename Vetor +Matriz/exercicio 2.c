#include <stdio.h>
int main(){
	float A[10],B[10];
	printf("Digite os valores do conjunto:\n");
	for(int i=0;i<10;i++){
		printf("posicao %d\n", i+1);
		scanf("%f",&A[i]);
		B[i]=A[i]*A[i];
    }
    printf("Os valores do conjunto sao:\n");
    for(int i=0;i<10;i++)
        printf("%.2",A[i]);
    printf("JA o dobro dos valores sao:\n");
    for(int i=0;<10;i++)
        printf("%.2",B[i]);
	getchar();
	getchar();
	return 0;
}