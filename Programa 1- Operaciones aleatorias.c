//Programa 1: Generar numeros y operaciones aleatorias

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
	int a;
	
    do {
        a = rand() % (5+1-1)+1;
        int n1 = rand() % 10;
        int n2 = rand() % 10;
        float resultado; 

        switch (a) {
            case 1:
                resultado = n1 + n2;
                printf("Suma: %d + %d = %f\n", n1, n2, resultado);
                break;
                
            case 2:
                resultado = n1 - n2;
                printf("Resta: %d - %d = %f\n", n1, n2, resultado);
                break;
            case 3:
                resultado = n1 * n2;
                printf("Multiplicación: %d * %d = %f\n", n1, n2, resultado);
                break;
            case 4:
                if (n2 != 0) {
                    resultado = (float)n1 / n2;
                    printf("División: %d / %d = %f\n", n1, n2, resultado);
                } else {
                    printf("No se puede dividir entre 0.\n");
                }
                break;
                
            default:
                printf("Terminar el programa\n");
                break;
        }
    } while (a != 5);

    return 0;
}

