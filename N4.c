#include<stdio.h> 
main(){
	
	float salarioActual, novoSalario;
	
	printf("Digite o sal�rio do funcion�rio: ");
	scanf("%f",&salarioActual);
	
	novoSalario = (salarioActual+(salarioActual*25)/100);
	
	printf("\n O novo sal�rio do funcion�rio � = %f",novoSalario);
}