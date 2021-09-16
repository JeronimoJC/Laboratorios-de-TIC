#include <stdio.h>
main(){
	int numero, resultado=1, i;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	
	for(i=numero; i>=1; i--){
		resultado*=i;
	
	printf("%d x  ",i);
	}
	printf("= %d ",resultado);
		
	
}