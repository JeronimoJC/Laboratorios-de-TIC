#include <stdio.h>
main(){
	float precoFabrica, percentualLucro, percentualDeImposto;
	float valorLucro, valorDoImposto, precoFinal, custo;
	
	printf("Digite o pre�o de f�brica: ");
	scanf("%f", &precoFabrica);
	printf("Digite o percentual de lucro de distribuidor: ");
	scanf("%f", &percentualLucro);
	printf("Digite o percentual de imposto: ");
	scanf("%f", &percentualDeImposto);
	
	custo = (precoFabrica+percentualLucro+percentualDeImposto);
	
	valorLucro = ((custo*percentualLucro)/100); 
	valorDoImposto = ((custo*percentualDeImposto)/100);
	precoFinal = (precoFabrica+valorLucro+valorDoImposto);
	
	printf("\nO valor do lucro do distribuidor �: %f", valorLucro);
    printf("\nO valor do imposto �: %f", valorDoImposto);
    printf("\nO pre�o final  �: %f", precoFinal);
	
}