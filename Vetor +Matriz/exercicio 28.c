#include <stdio.h>
void Preenchimento(int V[]){
	for(int i=0;i<10;i++){
		printf("Escreva os elementos do conjunto:[posi %d]",i+1);
		scanf("%d", &V[i]);
	}
}
int main (){
	int v[10],v1[10],v2[10],chec1=0,chec2=0;
	Preenchimento(v);
	
	for(int i=0;i<10;i++){
		if(v[i]%2==0){
			v1[chec1]=v[i];
			chec1++;
		}
		if(v[i]%2==1){
			v2[chec2]=v[i];
			chec2++;
		}
	}
	printf("Os elementos impares do conjunto sao: \n");
	for(int i=0;i<chec1;i++)
	    printf("%d ",v1[i]);
	    
	printf("Os elementos pares do conjunto sao: \n");
	for(int i=0;i<chec2;i++)
	    printf("%d ",v2[i]);
	return 0;
}