#include <stdio.h>

int main (){
	int x,*a;
	printf("Digite um valor:\n");
	scanf("%d", &x);
	
	a=&x;
	
	printf("Valor ponteiro: %d \n", *a);
	printf("Valor da variavel: %d\n", x);
	printf("Endereco do ponteiro: %d \n", a);
	printf("Endereco do valor: %d \n", &x);
	
	return 0;
}