#include <stdio.h>
int main(){
	int A[10],chec=0;
	for(int i=0;i<10;i++){
		printf("Digite os 10 valores do conjunto:[posicao %d]\n", i+1);
		scanf("%d",&A[i]);
	}
	for(int i=0;i<10;i++){
		for(int k=i+1;k<10;k++){
			if(A[k]==A[i]){
				chec=1;
				break;
			}
		}
		if(chec==1)
		break;
	}
	if(chec==1){
		printf("Os valores repetidos sao:\n");
	    for(int i=0;i<10;i++){
		    for(int k=i+1;k<10;k++){
			    if(A[k]==A[i]){
				   printf("%d ", A[i]);
				   break;
			    }
			}
		}
	}
	return 0;
}