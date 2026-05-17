#include <stdio.h>

void Dobro(int *x){
	*x= (*x)*2;
}

int main (){
	int *x, a;
	
	printf("Escolha um valor inteiro:\n");
	scanf("%d", &a);
	x=&a;
	
	Dobro(x);
	
	printf("res: %d\n", *x);
	return 0;
}