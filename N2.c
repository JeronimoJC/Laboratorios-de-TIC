#include<stdio.h>
main(){
	float salarioFuncionario, salarioMinimo, quantSalario;

	printf("Digite o salário mínimo: ");
	scanf("%f",&salarioMinimo);
    printf("Digite o salário do funcionário: ");
	scanf("%f",&salarioFuncionario);
	
	quantSalario = (salarioFuncionario/salarioMinimo);
	
	printf("A quantidade de salário mínimos que o funcionario ganha é = %f",quantSalario);
}