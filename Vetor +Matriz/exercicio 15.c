#include <stdio.h>
int main(){
	int A[20],chec=0;
	for(int i=0;i<20;i++){
		printf("Digite os 20 valores do conjunto:[posicao %d]\n", i+1);
		scanf("%d",&A[i]);
	}
	printf("Os valores diferentes sao:\n");
	for(int i=0;i<20;i++){
		for(int k=0;k<20;k++){
			if(A[i]==A[k]){
				chec++;
			}
		}
		if(chec==1){
			printf("%d ",A[i]);
		}
	}
	return 0;
}