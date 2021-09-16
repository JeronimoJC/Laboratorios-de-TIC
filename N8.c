#include <stdio.h>
main(){
	float salarioMinimo, salarioReceber;
	int numeroHoras;
	float horaTrabalhada, salarioBruto, imposto;
	printf("Digite o número de horas trabalhadas: ");
	scanf("%d", &numeroHoras);
	printf("Digite o salário mínimo: ");
	scanf("%f", &salarioMinimo);
	
	horaTrabalhada = (salarioMinimo/2);
	salarioBruto = (numeroHoras* horaTrabalhada);
	imposto = ((salarioBruto*3)/100);
	salarioReceber = (salarioBruto-imposto);
	
	printf("O valor de cada hora trabalhada é: %f",horaTrabalhada);
	printf("\nO salário bruto é = %f",salarioBruto);
	printf("\nO imposto é %f",imposto);
	printf("\nO salário a receber é = %f", salarioReceber);
}