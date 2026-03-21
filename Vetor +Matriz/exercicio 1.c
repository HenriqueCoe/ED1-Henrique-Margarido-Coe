#include <stdio.h>
int main(){
	int A[6];
	printf("Digite os valores do conjunto:\n");
	for(int i=0;i<6;i++){
		printf(" %dº\n", i);
		scanf("%d",&A[i]);
    }
    printf("Os valores do conjunto sao:\n");
    for(int i=0;i<6;i++)
        printf("%d",A[i]);
	getchar();
	getchar();
	return 0;
}