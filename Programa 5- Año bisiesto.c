//Programa que verifica si un a�o es bisiesto o no
#include <stdio.h>

int main (){
	int a=0;
	char repetir;
	
	do{

		printf("Introduzca a�o: ");
		scanf ("%d", &a);
	
		if ((a%4==0 && a%100!=0) || a %400==0){
			printf("Es bisisesto");
		}
		else {
			printf("No es bisiesto");
		}
	printf("\n\n\nDesea ver si otro a�o es bisiesto?(s/n): \n");
	scanf(" %c", &repetir);

	}
	while (repetir == 's' || repetir=='S');

	
	return 0;
}
