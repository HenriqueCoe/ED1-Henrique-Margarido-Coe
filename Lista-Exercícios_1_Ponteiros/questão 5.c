#include <stdio.h>
#include <stdlib.h>
void copiarString(char*origem, char*destino){
	while(*origem != '\0'){
		*destino= *origem;
		origem++;
		destino++;
	}
	*destino= '\0';
	}
int main (){
	char origem[15], *destino;
	int tam=0;
	
	printf("Digite uma palavra:\n");
	scanf("%s", origem);
	
	while(origem[tam] != '\0'){
		tam++;
	}
	
	destino= (char *) malloc((tam +1) * sizeof(char));
	
	copiarString(origem, destino);
	
	printf("Origem: %s\n", origem);
	printf("Destino: %s\n", destino);
	
	free(destino);	
	return 0;	
}