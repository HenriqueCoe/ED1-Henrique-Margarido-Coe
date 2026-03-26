#include <stdio.h>
int main(){
	int A[50];
	printf("Os valores do conjunto sao:\n");
	for(int i=0;i<50;i++){
		A[i]=(i+5*i)%(i+1);
		printf("%d ",A[i]);
	}
	return 0;
}