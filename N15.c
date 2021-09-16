#include <stdio.h>
main(){
	int numero;
	do{
		
			printf("Digite um número: ");
			scanf("%d", &numero);
			printf("\n seguindo%i \n",numero+1);
		
		
	}	while(numero>=0);
}