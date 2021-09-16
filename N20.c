#include <stdio.h> 
main(){
	float altura1=1.50, altura2=1.10;
	int ano=0;
	do{
		altura1+=0.02;
		altura2+=0.03;
		ano++;
		
	}while(altura2<=altura1);
	    
       printf("\nOs anos que faltam para altura2 atingir altura1 sao: %d" ,ano);
		
}