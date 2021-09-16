#include<stdio.h> 
main(){
	float  peso, consumidaNesteDia, quantSobrou, conversao, quantConsumida;
	float soma=0;
	int i;
	printf("\nDigite o peso em quilos: ");
	scanf("%f",&peso);
	
	for(i=1; i<=5; i++){
		printf("\nDigite a quantidade de racao consumida em gramas por um dos gatos no dia %d \n",i);
	    scanf("%f",&consumidaNesteDia);
	    
	    soma+=consumidaNesteDia;
	    quantConsumida = soma*2;
	    
	    conversao = quantConsumida / 1000;
	    quantSobrou = peso - conversao;
	    
	    
	}
	printf("\nA quantidade de racao que sobrou e %f", quantSobrou);
}