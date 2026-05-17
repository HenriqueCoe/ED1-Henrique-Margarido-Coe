#include <stdio.h>
#include <string.h>

void inv(char *str){
	char *inicio=str;
	char *fim=str+strlen(str)-1;
	char aux;
	
	while(inicio<fim){
		aux=*inicio;
		*inicio=*fim;
		*fim=aux;
		inicio++;
		fim--;
	}
}

int main(){
	char texto[20];
	
	printf("Digite uma palavra:\n");
	scanf("%s", texto);
	
	printf("Original: %s\n", texto);
	inv(texto);
	printf("Alterado: %s", texto);
	
	return 0;
}