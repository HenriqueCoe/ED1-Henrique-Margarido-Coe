#include <stdio.h>
int main (){
	int A[10],desvio=0,soma=0,media=0;
	for(int i=0;i<10;i++){
		scanf("%d", &A[i]);
		media+=A[i];
	}
	media=media/10;
	for(int i=0;i<10;i++){
		soma=(A[i]-media)*(A[i]-media);
	}
	desvio=(1/10)*soma;
	devio=(desvio)*(1/2);
	return 0;
}