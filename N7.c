#include <stdio.h>
main(){
	float precoFabrica, percentualLucro, percentualDeImposto;
	float valorLucro, valorDoImposto, precoFinal, custo;
	
	printf("Digite o preço de fábrica: ");
	scanf("%f", &precoFabrica);
	printf("Digite o percentual de lucro de distribuidor: ");
	scanf("%f", &percentualLucro);
	printf("Digite o percentual de imposto: ");
	scanf("%f", &percentualDeImposto);
	
	custo = (precoFabrica+percentualLucro+percentualDeImposto);
	
	valorLucro = ((custo*percentualLucro)/100); 
	valorDoImposto = ((custo*percentualDeImposto)/100);
	precoFinal = (precoFabrica+valorLucro+valorDoImposto);
	
	printf("\nO valor do lucro do distribuidor é: %f", valorLucro);
    printf("\nO valor do imposto é: %f", valorDoImposto);
    printf("\nO preço final  é: %f", precoFinal);
	
}