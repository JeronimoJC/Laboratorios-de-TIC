#include<stdio.h>
int main(){
	int i, numero, soma1=0, soma2=0;
	float mediaPares, mediaImpares;
	for(i=1; i<=10; i++){
		printf("Digite 10 n�meros: \n");
		scanf("%i",&numero);
	
		if(numero%2==0){
			soma1+=numero;
			mediaPares = soma1/10;
		}
		if(numero%2!=0){
			soma2+=numero;
			mediaImpares = soma2/10;  
		}
	}
		printf("A m�dia dos n�meros pares �: %f",mediaPares);
		printf("\nA m�dia dos n�meros �mpares �: %f",mediaImpares);
		
	return 0;	
}