#include<stdio.h>
main(){
	float salarioFuncionario, salarioMinimo, quantSalario;

	printf("Digite o sal�rio m�nimo: ");
	scanf("%f",&salarioMinimo);
    printf("Digite o sal�rio do funcion�rio: ");
	scanf("%f",&salarioFuncionario);
	
	quantSalario = (salarioFuncionario/salarioMinimo);
	
	printf("A quantidade de sal�rio m�nimos que o funcionario ganha � = %f",quantSalario);
}