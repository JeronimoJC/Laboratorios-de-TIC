#include <stdio.h>
main(){
	float salarioFuncionario, percentualAumento, valorAumentado, novoSalario;
	
	printf("insira o salário do funcionário e o percentual de aumento: ");
	scanf("%f%f",&salarioFuncionario ,&percentualAumento);
	
	valorAumentado = ((salarioFuncionario*percentualAumento)/100);
	novoSalario = (salarioFuncionario+(salarioFuncionario*percentualAumento)/100);
	
	printf("O valor do aumento é: %f", valorAumentado);
	printf("\n O novo salário do funcionário será = %f", novoSalario);
}
