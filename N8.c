#include <stdio.h>
main(){
	float salarioMinimo, salarioReceber;
	int numeroHoras;
	float horaTrabalhada, salarioBruto, imposto;
	printf("Digite o n�mero de horas trabalhadas: ");
	scanf("%d", &numeroHoras);
	printf("Digite o sal�rio m�nimo: ");
	scanf("%f", &salarioMinimo);
	
	horaTrabalhada = (salarioMinimo/2);
	salarioBruto = (numeroHoras* horaTrabalhada);
	imposto = ((salarioBruto*3)/100);
	salarioReceber = (salarioBruto-imposto);
	
	printf("O valor de cada hora trabalhada �: %f",horaTrabalhada);
	printf("\nO sal�rio bruto � = %f",salarioBruto);
	printf("\nO imposto � %f",imposto);
	printf("\nO sal�rio a receber � = %f", salarioReceber);
}