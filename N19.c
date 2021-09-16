#include <stdio.h>
int main(){
	
	int fibonacci=0, n1=0, n2=1, i;
	
	for(i=1; i<=20; i++){
		fibonacci = n1 + n2;
		n1 = n2;
		n2 = fibonacci;
	
	printf("A sequência de fibonacci até o 20º termo é: %i \n",fibonacci);
	}
	return 0;
}