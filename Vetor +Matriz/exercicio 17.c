#include <stdio.h>
int main(){
	int chec;
	float A[10];
	for(int i=0;i<10;i++){
		printf("Digite os valores do conjunto:[posi %d]\n",i+1);
		scanf("%f", &A[i]);
		if(A[i]<0){
		   A[i]=0;
	    }
	}
	return 0;
}