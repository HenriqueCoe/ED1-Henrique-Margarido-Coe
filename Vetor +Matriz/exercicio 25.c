#include <stdio.h>
int main (){
	int A[100], posi=0, i=0;
	while(posi<100){
		if(i%7!=0 && i%10!=7){
			A[posi]= i;
			posi++;
		}
		i++;
	}
	return 0;
}