#include <stdio.h>
main(){
	float alturaMaior=0, alturaMenor=0, altura;
	int i;
	for(i=1; i<=15; i++){
		printf("\nDigite a altura da pessoa %i: \n",i);
		scanf("%f", &altura);
		
		if(i==1)
			alturaMaior=altura;
		if(alturaMaior<altura){
			alturaMaior=altura;
		}
		if(i==1)
			alturaMenor=altura;
		if(alturaMenor>altura){
			alturaMenor=altura;
		}
	
	
		printf("\n A maior altura é: %f", alturaMaior);
		printf("\n A menor altura é: %f", alturaMenor);
		
	}
		
}