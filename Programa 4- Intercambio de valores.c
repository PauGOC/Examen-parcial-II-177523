//Programa que intercambia valores de variables
#include <stdio.h>

int main () {
	int v1,v2,v3,temporal;
	
	printf("Ingrese los valores para las variables:\n");
	printf("Valor de v1:");
	scanf("%d", &v1);
	printf("Valor de v2:");
	scanf("%d", &v2);
	printf("Valor de v3:");
	scanf("%d", &v3);
	
	printf("\n\nIntercambio de los valores de las variables:\n");
	
	//v1 -> v2, v2->v3, v3->v1
	temporal= v3;
	v3=v2;
	v2=v1;
	v1=temporal; 

	printf("v1: %d\n", v1);
	printf("v2: %d\n", v2);
	printf("v3: %d\n", v3);

return 0;


}
