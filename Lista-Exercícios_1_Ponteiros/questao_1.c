#include <stdio.h>
void Trocar (int *x, int *y){
	int ax;
	ax=*x;
	*x=*y;
	*y=ax;
}

int main (){
	int a,b;
	printf("Digite dois valores.\n");
	scanf("%d %d", &a, &b);
	
	Trocar(&a,&b);
	
	printf("Os valores trocados sao:%d, %d", a, b);
	return 0;
}
