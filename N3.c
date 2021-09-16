#include<stdio.h> 
main(){
	
	int anoNascimento, anoActual, idade, idade2050;
	
	printf("Digite o ano de nascimento e o ano actual: \n");
	scanf("%d%d",&anoNascimento, &anoActual);
	
	idade = (anoActual-anoNascimento);
	idade2050 = (2050- anoNascimento);
	
	printf("A idade da pessoa é = %d", idade);
	printf("\n A idade da pessoa daqui a 2050 será = %d", idade2050);
}