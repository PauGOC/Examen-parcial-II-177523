//Programa 2: Múltiplo de un número en una serie

#include <stdio.h>

int main (){
	int n;
	
	printf("De la lista del 1 al 100; cuales son múltiplos de 3?\n");
	
	for (n=0; n<=100;n++){
		printf("%d", n);
		
		if (n%3==0){
			printf("  Es multiplo de 3\n");
		}
		else{
			printf("  No es multiplo de 3\n");
		}
	}
		return 0;
}
