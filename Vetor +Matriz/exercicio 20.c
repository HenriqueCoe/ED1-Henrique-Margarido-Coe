#include <stdio.h>
int main(){
	int A[10],B[10],chec,cont=0;
		for(int i=0;i<10;i++){
    	    printf("Escolha os valores do conjunto:posi [%d]",i+1);
    		scanf("%d",&chec);
    		    while(chec<0||chec>50){
    			printf("valor invalido escolha um valor entre 0-50:");
    			scanf("%d",&chec);
			    }
		   	A[i]=chec;
		}
	chec=0;
	for(int i=0;i<10;i++){
		if(A[i]%2==1){
		   B[chec]=A[i];
		   cont++;
		   chec++;
	    }
	}
	chec=0;
	printf("Primeiro conjunto:\n");
	for(int i=0;i<10;i++){
		printf("%d ",A[i]);
		chec++;
		if(chec%2==0){
			printf("\n");
		}
	}
	chec=0;
	printf("segundo conjunto:\n");
	for(int i=0;i<cont;i++){
		printf("%d ",B[i]);
		chec++;
		if(chec%2==0){
			printf("\n");
		}
	}
	return 0;
}