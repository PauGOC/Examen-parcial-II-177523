//Programa que imprime una piramide
#include <stdio.h>

int main() {
    int numeros; 
    printf("Ingrese la cantidad de pisos para la piramide: ");
    scanf("%d", &numeros);
    int i,j;

    for (i = 1; i <= numeros; i++) {
        for (j = 1; j <= numeros - i; j++) {
            printf("");
        }

        for (j = 1; j <= i; j++) {
            printf(" %d", j);
        }

        // Salto de línea para pasar al siguiente piso
        printf("\n");
    }

    return 0;
}

