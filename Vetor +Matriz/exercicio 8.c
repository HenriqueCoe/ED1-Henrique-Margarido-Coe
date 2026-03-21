#include <stdio.h>
int main(){
	int A[6];
	printf("Digite os valores do conjunto:\n");
	for(int i=0;i<6;i++){
		printf("posicao %d\n", i+1);
		scanf("%d",&A[i]);
    }
    printf("A ordem inversa do conjunto e\n:");
    for(int i=6;i>0;i--)
    	printf("%d",A[i-1]);
	getchar();
	getchar();
	return 0;
}