#include <stdio.h>
#include <math.h>
int main(){
	
	int a, b, c;
	float x1, x2, delta;
	
	printf("Digite o valor de a, b e c: \n");
	scanf("%d%d%d",&a ,&b ,&c);
	
	if(a!=0 && b!=0 && c!=0){
		delta = (pow(b,2)-(4*a*c)); 
		
		if(delta>0){
			x1 = ((-b+sqrt(delta))/(2*a));
			x2 = ((-b-sqrt(delta))/(2*a));
		
			printf("A equação tem duas soluções x1 e x2 %f e %f",x1 ,x2);
		}else if(delta==0){
			x1 = (-b/(2*a));
			x2 = x1;
			
			printf("\nA equação tem apenas uma solução: %f, %f",x1, x2);
		}else if(delta<0){
			printf("\nA equação não tem solução");
		}
	}
	return 0;
}