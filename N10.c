#include <stdio.h>
main(){
	float valorQuilowatt, valorASerPago, valorComDesconto, salarioMinimo, quantQuilowatt;
	
	printf("Digite o sal�rio m�nimo: ");
	scanf("%f", &salarioMinimo);
	printf("Digite a quantidade de quilowatts consumida: ");
	scanf("%f", &quantQuilowatt);
	
	valorQuilowatt = salarioMinimo/5;
	valorASerPago = valorQuilowatt*quantQuilowatt;
	valorComDesconto = (valorASerPago-(valorASerPago*15)/100);
     
    printf("\nO valor de cada quilowatt �: %f", valorQuilowatt);
	printf("\nO valor a ser pago pela resid�ncia �: %f", valorASerPago);
	printf("\nO valor a ser pago com desconto de 15 por cento ser�: %f", valorComDesconto); 
}