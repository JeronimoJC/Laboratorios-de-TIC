#include <stdio.h>
main(){
	float salarioFuncionario, percentualAumento, valorAumentado, novoSalario;
	
	printf("insira o sal�rio do funcion�rio e o percentual de aumento: ");
	scanf("%f%f",&salarioFuncionario ,&percentualAumento);
	
	valorAumentado = ((salarioFuncionario*percentualAumento)/100);
	novoSalario = (salarioFuncionario+(salarioFuncionario*percentualAumento)/100);
	
	printf("O valor do aumento �: %f", valorAumentado);
	printf("\n O novo sal�rio do funcion�rio ser� = %f", novoSalario);
}
