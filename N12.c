#include<stdio.h> 
main(){
	int numero, unidade, milhar, dezena, centena, milMilhar;
	printf("\nDigite o numero: ");
	scanf("%d",&numero);
	
	unidade=(numero/1)%10;
	dezena=(numero/10)%10;
	centena=(numero/100)%10;
	milhar=(numero/1000)%10;
	milMilhar=(numero/10000)%10;
	
	if(unidade==milMilhar && milhar==dezena){
		printf("\nO numero e palindromo");
		
	}else{
		printf("\nO numero nao e palindromo");
	}
	printf("\n%d",unidade);
	printf("\n%d",dezena);
	printf("\n%d",centena);
    printf("\n%d",milhar);	
	printf("\n%d",milMilhar);
}