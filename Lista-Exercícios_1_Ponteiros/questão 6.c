#include <stdio.h>

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes){
	*vogais=0;
	*consoantes=0;
	
	while(*str != '0'){
		char c= *str;
		if(c== 'a' || c== 'e' || c=='i' || c=='o' || c=='u'){
			(*vogais)++;
		}
		else if(c >='a' && c <= 'z'){
			(*consoantes)++;
		}
		str++;
	}
}
int main(){
	char pal[20];
	int vogais, consoantes;
	
	printf("Digite uma palavra:\n");
	scanf("%s", pal);
	
	contarVogaisConsoantes(pal, &vogais, &consoantes);
	
	printf("Vogais: %d\n", vogais);
	printf("Consoantes: %d\n", consoantes);
	
	return 0;
}