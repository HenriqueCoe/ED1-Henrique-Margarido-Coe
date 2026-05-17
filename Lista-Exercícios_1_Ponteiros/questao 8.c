#include <stdio.h>

void Operacoes(float x, float y, float *som, float *sub, float *mult, float *div){
	*som=x+y;
	*sub=x-y;
	*mult=x*y;
	if(y!=0){
		*div=x/y;
    }else{
    	*div=0;
	}
	
}

int main (){
	float a, b, soma, sub, mult, divi;
	
	printf("Digite dois valores: \n");
	scanf("%f %f", &a, &b);
	
	Operacoes(a,b,&soma,&sub,&mult,&divi);
	
	printf("resultados de %.2f e %.2f:\n", a, b);
	printf("Soma: %.2f\n", soma);
	printf("Sub: %.2f\n", sub);
	printf("mult: %.2f\n", mult);
	printf("divisao: %.2f (caso apareca 0 a divisao e invalida)", divi);
	
	return 0;
}