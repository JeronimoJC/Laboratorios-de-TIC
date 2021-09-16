#include <stdio.h>
int main(){
	
	int soma=0, i;
	
	for(i=1; i<=500; i++){
		if(i%2!=0 && i%3==0)
			
			soma+=i;
		
    	printf("\nA soma dos números impares múltiplos de 3 que se encontram no intervalo de 1 até 500 é =%d",soma);
    
 	}
 	return 0;
}

