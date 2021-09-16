#include<stdio.h> 
main(){
	
	float salarioActual, novoSalario;
	
	printf("Digite o salário do funcionário: ");
	scanf("%f",&salarioActual);
	
	novoSalario = (salarioActual+(salarioActual*25)/100);
	
	printf("\n O novo salário do funcionário é = %f",novoSalario);
}