#include <stdio.h>
main(){
	float custoDoEspetaculo, precoBilhete;
	int quantConvites;
	
	printf("Insira o custo de espectaculo e o pre�o de bilhete: \n");
	scanf("%f%f",&custoDoEspetaculo ,&precoBilhete);
	
	quantConvites = (custoDoEspetaculo/precoBilhete);
	
	printf("A quantidades de convites � = %d",quantConvites);
}